#!/bin/bash

set -e

if [ "$#" -ne 2 ]; then
	echo "Usage: impl <generic_subject> <concrete_type>"
	exit 1
fi

SUBJECT="$1"
CONCRETE="$2"
UPPER=$(echo "$CONCRETE" | tr '[:lower:]' '[:upper:]')

# Default locations
TYPE_PATH="types/s_${CONCRETE}.h"
API_PATH="apis/${CONCRETE}.h"

# Check for compound generic
if [[ "$CONCRETE" == *_* ]]; then
	PREFIX="${CONCRETE%%_*}"   # arr in arr_str
	SUFFIX="${CONCRETE#*_}"    # str in arr_str
	GENERIC_PATH="types/${PREFIX}/s_${CONCRETE}.h"
	GENERIC_API="apis/${PREFIX}/${CONCRETE}.h"
	if [ ! -f "$TYPE_PATH" ] && [ -f "$GENERIC_PATH" ]; then
		TYPE_PATH="$GENERIC_PATH"
	fi
	if [ ! -f "$API_PATH" ] && [ -f "$GENERIC_API" ]; then
		API_PATH="$GENERIC_API"
	fi
fi

if [ ! -f "$TYPE_PATH" ]; then
	echo "❌ Cannot find type for $CONCRETE at $TYPE_PATH"
	exit 1
fi

if [ ! -f "$API_PATH" ]; then
	echo "❌ Cannot find API for $CONCRETE at $API_PATH"
	exit 1
fi

# Determine ownership
if grep -Eq "(drop|clone)_${CONCRETE}\b" "$API_PATH"; then
	KIND="O"
	LOWVAR="\$o"
	UPVAR="\$O"
	GEN="o"
else
	KIND="T"
	LOWVAR="\$t"
	UPVAR="\$T"
	GEN="t"
fi

# Template source
TYPES_DIR="types/${SUBJECT}"
APIS_DIR="apis/${SUBJECT}"
SRC_DIR="src/types/${SUBJECT}"

HDR_SRC="${TYPES_DIR}/s_${SUBJECT}_${LOWVAR}.h"
API_SRC="${APIS_DIR}/${SUBJECT}_${LOWVAR}.h"
SRC_SRC="${SRC_DIR}/${LOWVAR}"

# Destination
HDR_DST="${TYPES_DIR}/s_${SUBJECT}_${CONCRETE}.h"
API_DST="${APIS_DIR}/${SUBJECT}_${CONCRETE}.h"
SRC_DST="${SRC_DIR}/${CONCRETE}"

if [ ! -f "$HDR_SRC" ] || [ ! -f "$API_SRC" ] || [ ! -d "$SRC_SRC" ]; then
	echo "❌ Missing generic template for $SUBJECT ($KIND)"
	exit 1
fi

mkdir -p "$SRC_DST"

replace_vars() {
	sed -e "s/\$t/${CONCRETE}/g" \
	    -e "s/\$T/${UPPER}/g" \
	    -e "s/\$o/${CONCRETE}/g" \
	    -e "s/\$O/${UPPER}/g"
}

# Copy with replacement
replace_vars < "$HDR_SRC" > "$HDR_DST"
replace_vars < "$API_SRC" > "$API_DST"

# Ensure fresh destination
rm -rf "$SRC_DST"
mkdir -p "$SRC_DST"

# Actual template dir is literally named "$o" or "$t"
GENERIC_SRC_DIR="$SRC_DIR/\$${GEN}"

if [ ! -d "$GENERIC_SRC_DIR" ]; then
	echo "❌ Template directory not found: $GENERIC_SRC_DIR"
	exit 1
fi

# Recursively copy and transform each file
find "$GENERIC_SRC_DIR" -type f -name "*.c" | while read -r FILE; do
	REL_PATH="${FILE#$GENERIC_SRC_DIR/}"
	DEST_FILE="$SRC_DST/$REL_PATH"
	mkdir -p "$(dirname "$DEST_FILE")"
	replace_vars < "$FILE" > "$DEST_FILE"
done


echo "✅ Impl done: ${SUBJECT}_${CONCRETE} from $KIND → using $LOWVAR/$UPVAR"
