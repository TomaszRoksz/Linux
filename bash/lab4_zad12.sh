#!/bash/main

add_to_zip(){
local files=""
local path="$1"
for item in "$path"/*
do
if [[ $item == *.txt ]]
then
files=$files $item
fi
done
echo $files
}


if [[ "$#" -eq 1 ]]
then
path=$1
if [[ -d "$path" ]]
then
files=&(add_to_zip "$path")

mkdir ~/backups
user=$(whoami)
date=$(date +%F)
file_name="$user"_"$date".zip

zip -r ~/backups/"$file_name" $files
else
echo "Nie podano ścieżki, lub nie jest folerem."
fi
else
echo "Nie podano jednego argumentu."
fi
exit 0

