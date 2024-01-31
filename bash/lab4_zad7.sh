#!/bin/bash

if [[ "$#" -eq 1 ]]
then
file=$1
if  [[ $file == *.txt ]]
then
vim $file
elif [[ $file == *.sh ]]
then
./$file
else
echo "plik jest nieznany"
fi
else
echo "nie podano jednego argumentu"
fi
exit 0
