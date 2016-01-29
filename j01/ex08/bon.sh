#!/bin/sh
ldapsearch -Q -s sub sn="*bon*" | grep "sn: " | sed 's/sn: //g' | wc -l | bc