#!/bin/bash

if [[ "$#" -eq 3 ]]
then

if [[ "$1" == -* || "$2" == -* || "$3" == -* ]]
then
echo 1
else
echo 0
fi
else
echo 1
fi
exit 0
