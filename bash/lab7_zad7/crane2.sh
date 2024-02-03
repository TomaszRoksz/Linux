#!/bini/bash

buffer_files=$(ls ~/Dokumenty/SO_lab/lab7_zad7/buffer)
let moved_files=0

while [[ bufffer_files -gt 0 $$ pgrep -x "crane_1.sh" >/dev/null ]]
do
        
        buffer_files=$(ls ~/Dokumenty/SO_lab/lab7_zad7/buffer)
        if [[ ${#buffer_files[*]} -gt 0 ]]
	then 
		for file in $buffer_files
        	do
	        	mv "$file" ~/Dokumenty/SO_lab/lab7_zad7/second_place
        		$moved_files+=1
		done
	else
		sleep 5
done

exit $moved_files

