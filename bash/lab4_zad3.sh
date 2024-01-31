#!/bin/bash
if [[ -e $1 ]]
then
	echo Argument jest ścieżką.
else
	echo Argument nie jest poprawną ściążką.
fi
if [[ -r $1 ]]
then
	echo Użytkownik ma prawo odczytu
fi
if [[ -w $1 ]]
then
	echo Użytkownik ma prawo zapisu
fi
if [[ -x $1 ]]
then
	echo Użytkownić ma prawo wykonania
fi
exit 0
