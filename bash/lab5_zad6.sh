#!/bin/bash

# Funkcja obsługująca sygnał SIGINT
sigint_handler() {
    echo "Jestem nieśmiertelny."
}

# Funkcja obsługująca sygnał SIGHUP
sighup_handler() {
    trap - SIGINT  # Wyłącz obsługę sygnału SIGINT
    echo "Zatrzymano reakcję na sygnał SIGINT."
}

# Ustawienie obsługi sygnału SIGINT
trap sigint_handler SIGINT

# Ustawienie obsługi sygnału SIGHUP
trap sighup_handler SIGHUP

# Pętla nieskończona
while true; do
    sleep 5
done
