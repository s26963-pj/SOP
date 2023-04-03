#!/bin/bash

echo "program nazywa sie: $0" 
x=1
for p in $*
do
	echo "param $x: $p"
	x=$(($x+1))
done
echo "param*: $*"
echo "param#: $#"
echo "proc PID: $$"
