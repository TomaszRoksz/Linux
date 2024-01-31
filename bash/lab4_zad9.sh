#!/bin/bash

if [[ "$#" -eq 1 ]]
then
word=$1
list=$(ls /home/troksz)
n=0

for file in $list
do
if [[ $file == *$word* ]]
then
 ((n=n+1))
fi
done
else
echo "nie podano prawidłowego argumentu"
fi
echo "liczba dopasowan: "$n
exit 0
