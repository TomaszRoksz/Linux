#!/bin/bash

while [[ 1>0 ]]
do

while read -r line < lab4_zad13
do
read -r word pipe <<< "$line"
done

let sum=0

for ((i=0; i<${#word}; i++
if [[ ${word:$i:(($i+1))==[aeyuoi] ]]
then
sum=(($sum+1))
fi
echo $sum > "$pipe"

done

exit 1
