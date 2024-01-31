#!/bin/bash

if [[ "$#" -eq 1 ]]
then
login=$1
echo home/$login/dev/pts/1
else
echo "nie podano jednego argumentu"
fi

exit 0
