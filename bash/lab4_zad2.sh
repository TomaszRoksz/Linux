#!/bin/bash

if [[ ${#1} -gt ${#2} ]]
then
	echo $1 jest dluzsze
elif [[ ${#2} -gt ${#1} ]]
then
	echo $2 jest dluzsze
else
	echo $1'='$2
fi

if [[ $1 > $2 ]]
then
        echo $2 wystepuje szybciej
elif [[ $2 > $1 ]]
then
        echo $1 wystepuje szybciej
else
        echo $1'='$2
fi


exit 0
