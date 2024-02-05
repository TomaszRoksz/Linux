#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main() {
    char file1[] = "/home/troksz/katalogi.txt"; // Nazwa pierwszego pliku
    char file2[] = "/home/troksz/informacje.txt"; // Nazwa drugiego pliku

    char command1[BUFFER_SIZE];
    char command2[BUFFER_SIZE];

    // Tworzenie polecenia dla zliczenia słów w plikach
    sprintf(command1, "wc -w < %s", file1);
    sprintf(command2, "wc -w < %s", file2);

    // Utworzenie strumienia potokowego i otwarcie plików
    FILE *stream1 = popen(command1, "r");
    FILE *stream2 = popen(command2, "r");

    if (stream1 == NULL || stream2 == NULL) {
        perror("Błąd otwarcia strumienia potokowego");
        return 1;
    }

    // Odczytanie ilości słów z obu plików
    int words1, words2;
    fscanf(stream1, "%d", &words1);
    fscanf(stream2, "%d", &words2);

    // Zamknięcie strumieni potokowych
    if (pclose(stream1) == -1 || pclose(stream2) == -1) {
        perror("Błąd zamknięcia strumienia potokowego");
        return 1;
    }

    // Porównanie i wyświetlenie wyniku
    if (words1 > words2) {
        printf("Plik %s ma więcej słów niż plik %s.\n", file1, file2);
    } else if (words1 < words2) {
        printf("Plik %s ma więcej słów niż plik %s.\n", file2, file1);
    } else {
        printf("Oba pliki mają tę samą liczbę słów.\n");
    }

    return 0;
}
