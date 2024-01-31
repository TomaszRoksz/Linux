#!/bin/bash
mkdir /home/troksz/$(date +%Y.%m.%d)
data_dzis=$(date +%s)
for el  in /home/troksz/*
do
	echo "$el"
        data=$(stat -c %Y "$el")
	if [[ "$data_dzis" -ge "$data" ]]
	then
		cp -r /home/troksz/$(date +%Y.%m.%d) "$el"
	fi
done
exit 0

