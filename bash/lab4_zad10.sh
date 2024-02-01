#!/bin/bash

list=( "$@" )  # Zmienna listy przechowuje wszystkie argumenty przekazane do skryptu
sum=0
for num in "${list[@]}"  # Iteracja przez elementy tablicy listy
do
    sum=$((sum + num))  # Dodawanie wartości liczbowych
done
echo "suma: $sum"  # Wyświetlenie sumy
exit 0




