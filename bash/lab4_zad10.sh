#!/bin/bash

list=( $* )
sum=0
for num in "$list"
do
sum=$((sum+num))
done
echo "suma: "$sum
exit 0
