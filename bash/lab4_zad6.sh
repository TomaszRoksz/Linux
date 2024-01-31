#!/bin/bash

reverse_string(){
	local string="$1"
	local reversed=""
	for (( i=${#string}; i>=0; i-- ))
	do
		reversed="${reversed}${string:$i:1}"
	done

	echo "$reversed"
}



if [ "$#" -eq 1 ]; then
	input="$1"
	rev=$(reverse_string "$input")
	echo "$rev"

else
	echo podaj jeden napis
	exit 1
fi
