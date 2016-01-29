#!/bin/sh
cat /etc/passwd | sed '/^#/d' | sed 'N;s/.*\n//' | rev | cut -d ':' -f7 | sort -r | sed -n ''"$FT_LINE1"','"$FT_LINE2"'p' | tr '\n' ',' | sed 's/,/, /g' |  sed 's/..$/./' | tr -d '\n'