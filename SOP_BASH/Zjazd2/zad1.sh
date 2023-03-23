#!/bin/bash

if [[ $@ != $NULL ]]; then
	echo "Skrypt uruchomiono z parametrem: $1"
else
	echo "Skrypt nie zostal uruchomiony z jakimkolwiek parametrem"
fi
