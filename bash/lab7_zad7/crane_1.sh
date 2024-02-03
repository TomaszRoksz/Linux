#!/bini/bash

let buffer_capacity=3
files=$(ls ~/Dokumenty/SO_lab/lab7_zad7/first_place)

for file in $files
do
	let flag=0
	buffer_files=$(ls ~/Dokumenty/SO_lab/lab7_zad7/buffer)
	while [[  $flag -eq 0 ]]
	do

	if [[ $buffer_files -lt $buffer_capacity ]]
		then
		mv "$file" ~/Dokumenty/SO_lab/lab7_zad7/buffer
		let flag=1
		else
		let flag=0
		sleep 5
	fi
	done
done

exit ${#files[*]}

