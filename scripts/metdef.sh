#!/bin/bash

set -e

if [ "$#" -lt 3 ]; then
	echo "Usage: metdef <subject> <generic or -> <return_type> method(params);"
	exit 1
fi

SUBJECT="$1"
GENERIC="$2"
shift 2

DECL="$*"
DECL="${DECL%;}"  # Remove trailing semicolon if exists

# Extract return type and function signature
RET_TYPE=$(echo "$DECL" | awk '{print $1}')
SIG=$(echo "$DECL" | cut -d' ' -f2-)

# Extract function name
FUNC_NAME=$(echo "$SIG" | grep -oP '^\w+')

# Determine full function name and parameter line
if [ "$GENERIC" = "-" ]; then
	HEADER="apis/${SUBJECT}.h"
	CFILE="src/types/${SUBJECT}/${FUNC_NAME}.c"
	PREFIX="${SUBJECT}"
	SELF_PARAM="const t_${SUBJECT} *self"
	INCLUDE="${SUBJECT}.h"
	FUNC_DECL="${RET_TYPE} $( [ "$RET_TYPE" != "void" ] && echo USE )\n${PREFIX}_${FUNC_NAME}(${SELF_PARAM}"
else
	HEADER="apis/${SUBJECT}/${SUBJECT}_${GENERIC}.h"
	CFILE="src/types/${SUBJECT}/${GENERIC}/${FUNC_NAME}.c"
	PREFIX="${SUBJECT}_${GENERIC}"
	SELF_PARAM="const t_${SUBJECT}_${GENERIC} *self"
	INCLUDE="${SUBJECT}/${SUBJECT}_${GENERIC}.h"
	FUNC_DECL="${RET_TYPE} $( [ "$RET_TYPE" != "void" ] && echo USE )\n${PREFIX}_${FUNC_NAME}(${SELF_PARAM}"
fi

# Extract and append rest of parameters
PARAMS=$(echo "$SIG" | sed -E "s/^$FUNC_NAME\s*\((.*)\)$/\1/" | sed -E "s/^\s*//")
[ -n "$PARAMS" ] && FUNC_DECL="${FUNC_DECL}, ${PARAMS}"
FUNC_DECL="${FUNC_DECL});"

# Append to header if not already present
mkdir -p "$(dirname "$HEADER")"
touch "$HEADER"
if ! grep -q "${PREFIX}_${FUNC_NAME}" "$HEADER"; then
	echo -e "\n${FUNC_DECL}" >> "$HEADER"
fi

# Generate source file
mkdir -p "$(dirname "$CFILE")"
if [ ! -f "$CFILE" ]; then
	cat << EOF > "$CFILE"
#include "${INCLUDE}"

${RET_TYPE} $( [ "$RET_TYPE" != "void" ] && echo USE )
${PREFIX}_${FUNC_NAME}(${SELF_PARAM}${PARAMS:+, $PARAMS})
{
	// TODO: implement
}
EOF
	echo "✅ Created $CFILE and updated $HEADER"
else
	echo "⚠️  $CFILE already exists. Skipped file creation."
fi
