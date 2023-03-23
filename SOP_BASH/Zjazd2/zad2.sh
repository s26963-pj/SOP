#!/bin/bash

if [ -e SOP_display.sh ]; then
	./SOP_display.sh
elif [ $@ != $NULL ]; then
	./$1
else
	echo "blad"
fi
