#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main() {
    FILE *ls_output = popen("ls -1 $HOME", "r");

    if (ls_output == NULL) {
        perror("Błąd otwarcia strumienia potokowego");
        return 1;
    }

    char buffer[BUFFER_SIZE];
    char shortest[BUFFER_SIZE];
    char longest[BUFFER_SIZE];

    int isFirst = 1;

    while (fgets(buffer, BUFFER_SIZE, ls_output) != NULL) {
        buffer[strcspn(buffer, "\n")] = 0; // Usuń znak nowej linii na końcu każdej nazwy pliku

        if (isFirst) {
            // Pierwsza nazwa pliku - ustaw zarówno najkrótszą, jak i najdłuższą
            strcpy(shortest, buffer);
            strcpy(longest, buffer);
            isFirst = 0;
        } else {
            // Sprawdź i aktualizuj najkrótszą i najdłuższą nazwę pliku
            if (strlen(buffer) < strlen(shortest)) {
                strcpy(shortest, buffer);
            }
            if (strlen(buffer) > strlen(longest)) {
                strcpy(longest, buffer);
            }
        }

        printf("%s\n", buffer);
    }

    if (pclose(ls_output) == -1) {
        perror("Błąd zamknięcia strumienia potokowego");
        return 1;
    }

    printf("\nNajkrótsza nazwa pliku/folderu: %s\n", shortest);
    printf("Najdłuższa nazwa pliku/folderu: %s\n", longest);

    return 0;
}
