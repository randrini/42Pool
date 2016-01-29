ldapsearch -Q "uid=z*" cn | grep -i 'cn: Z' | sed 's/cn: //g' | sort -r
