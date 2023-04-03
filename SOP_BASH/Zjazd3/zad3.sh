#!/bin/bash

read x
if [ -e ~/SOP_BASH/Zjazd3/$x ]
then
	echo "Masz plik $x w biezacym folderze"
else
	echo "Nie masz pliku $x w biezacym folderze"
fi
