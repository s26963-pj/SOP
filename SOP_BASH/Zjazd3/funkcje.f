#!/bin/bash

function test
{
echo "-------Menu------------"
echo "c - aktualny katalog"
echo "u - nazwa uzytkownika"
echo "h - katalog domowy"
echo "-----------------------"
echo "Twoj wybor: "
read x
case "$x" in
	"c") echo `pwd`;;
	"u") echo "$USER";;
	"h") echo "$HOME";;
	*) echo "Nieistniejacy wybor";;
esac
}
