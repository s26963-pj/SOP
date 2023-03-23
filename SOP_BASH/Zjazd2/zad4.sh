#!/bin/bash

x= ls | wc -l
if [ x > 5 ]; then
	echo "Jest wiecej niz 5 plikow"
else
	echo "Jest mniej niz 5 plikow"
fi
