#!/bin/bash

sigusr1_handler() {
	./crane1.sh &
	./crane2.sh &
}

sigint_handler() {
	pkill -SIGKILL -f crane1.sh
	pkill -SIGKILL -f crane2.sh
	echo "Cranes stopped working."
}

trap sigusr1_handler SIGUSR1
trap sigint_handler SIGINT

while [[ 1 ]]
do
sleep 5
done

exit 0
