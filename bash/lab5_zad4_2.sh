#!/bin/bash

if [[ "$#" -eq 3 ]]
then

nohup ./lab5_zad4_1.sh "$1" "$2" "$3" > lab5_zad4_nohup.txt &
result="$(cat lab5_zad4_nohup.txt)"
echo "$result"
if [[  $result -eq 0 ]]
then
if (( ($1+$2) < "$3" || ($1+$3) < $2  || ($2+$3) < $1 ))
then
echo "Z podanych boków nie można zbudować trójkąta."
else
echo "Z podanych boków można zbudować trójkąt."
fi
else
echo "Któryś z boków jest ujemny"
fi
else
echo "Nie podano trzech argumentów."
fi
exit 0
