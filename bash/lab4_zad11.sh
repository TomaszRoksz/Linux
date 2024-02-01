#!/bin/bash

read_length(){
local path="$1"
local size=0

for item in "$path"/*
do
if [[ -f "$item" ]]
then 
size=$((size + $(stat -c "%s" "$item")))
fi
done
echo "$size"
}


if [[ "$#" -eq 1 ]]
then
path=$1

	if [[ -d "$path" ]];
	then
	size=$(read_length "$path")
	echo "Rozmiar: " $size "bajtów"
	else
	echo "podana ścieżką nie wskazuje na folder."
	fi
fi
exit 0
