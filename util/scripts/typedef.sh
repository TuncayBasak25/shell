#!/bin/bash

set -e

if [ "$#" -lt 1 ]; then
	echo "Usage: define <type> [GenericType]"
	exit 1
fi

TYPE="$1"
GENERIC="$2"

DATE=$(date "+%Y/%m/%d %H:%M:%S")
YEAR=$(date "+%Y")

# Case: Generic type provided
if [ -n "$GENERIC" ]; then
	# Create directories
	mkdir -p "types/${TYPE}" "apis/${TYPE}"

	# Filenames
	SFILE="types/${TYPE}/s_${TYPE}_${GENERIC}.h"
	AFILE="apis/${TYPE}/${TYPE}_${GENERIC}.h"

	# Header guards
	SENTINEL_S=$(echo "S_${TYPE}_${GENERIC}_H" | tr '[:lower:]' '[:upper:]')
	SENTINEL_A=$(echo "${TYPE}_${GENERIC}_H" | tr '[:lower:]' '[:upper:]')

# s_TYPE_GENERIC.h
cat << EOF > "$SFILE"
#ifndef ${SENTINEL_S}
# define ${SENTINEL_S}

# include "${GENERIC}.h"

typedef struct s_${TYPE}_${GENERIC}
{

}			t_${TYPE}_${GENERIC};

#endif
EOF

# TYPE_GENERIC.h
cat << EOF > "$AFILE"
#ifndef ${SENTINEL_A}
# define ${SENTINEL_A}

# include "${GENERIC}/s_${TYPE}_${GENERIC}.h"

#endif
EOF

	echo "✅ Created generic type ${TYPE}<${GENERIC}>"
else
	# Simple type
	UPPER=$(echo "$TYPE" | tr '[:lower:]' '[:upper:]')

	mkdir -p types apis

cat << EOF > "types/s_${TYPE}.h"
#ifndef S_${UPPER}_H
# define S_${UPPER}_H

# include "core.h"

typedef struct s_${TYPE}
{

}			t_${TYPE};

#endif
EOF

cat << EOF > "apis/${TYPE}.h"
#ifndef ${UPPER}_H
# define ${UPPER}_H

# include "s_${TYPE}.h"

#endif
EOF

	echo "✅ Created type ${TYPE}"
fi
