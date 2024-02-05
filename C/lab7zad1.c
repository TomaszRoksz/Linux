#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *liczby;

	int liczba, min, max;	

	liczby=fopen("liczby.txt", "r");
	
	if (liczby == NULL) {
        fprintf(stderr, "Błąd: Nie udało się otworzyć pliku liczby.txt\n");
        return 1; // Zakończ program z błędem
   	}

	fscanf(liczby, "%d", &liczba);
	min=max=liczba;

	while (fscanf(liczby, "%d", &liczba) == 1) {
        	// Znajdź minimum i maksimum
        	if (liczba < min) {
            		min = liczba;
        	}
        	if (liczba > max) {
            		max = liczba;
        	}
	}

	fclose(liczby);
	printf("Najmniejsza liczba: %d\n", min);
    	printf("Największa liczba: %d\n", max);

	return 0;
}
