#!/bin/bash

trap ./lab5_zad5_2.sh USR1
trap ./lab5_zad5_3.sh USR2
while true
do
 sleep 5
done
exit 0
