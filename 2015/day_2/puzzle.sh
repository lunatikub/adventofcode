#!/bin/bash

INPUT="$1"

cat <<EOF
static const input_t inputs[] = {
EOF

nr_input=0

while read -r line
do
  l=$(echo $line | cut -d 'x' -f1)
  h=$(echo $line | cut -d 'x' -f2)
  w=$(echo $line | cut -d 'x' -f3)
  echo "  { $l, $h, $w },"
  nr_input=$((nr_input + 1))
done < $INPUT

cat <<EOF
};

#define NR_INPUT $nr_input
EOF

exit 0
