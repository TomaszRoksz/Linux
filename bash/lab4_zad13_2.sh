#!/bin/bash

if [[ "$#" -eq 1 ]]
string=$1

pipe=lab4_zad13_klient
mkfifo "$pipe"

echo "$string $pipe"  > lab4zad13

while read -r sum < "$pipe"

echo "Słowo zawiera $sum samogłosek"

rm $pipe

exit 0
