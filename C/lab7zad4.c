#include<stdio.h>
#include<string.h>



int main(){

	char imie[100];
	char nazwisko[100];

	char imie1[100];
	char nazwisko1[100];


	printf("Podaj imie: ");
	scanf("%s", &imie);

	printf("Podaj nazwisko: ");
	scanf("%s", &nazwisko);



	FILE *baza;
	baza=fopen("baza.txt", "r");

	if (baza == NULL) {
        	fprintf(stderr, "Błąd: Nie udało się otworzyć pliku liczby.txt\n");
        	return 1; // Zakończ program z błędem
   		}

	while (fscanf(baza, "%s%s", &imie1, &nazwisko1) == 2) {
        	// Znajdź minimum i maksimum
        	if (strcmp(imie1,imie)==0 && strcmp(nazwisko1,nazwisko)==0) {
            		printf("w bazie znajduje sie taka osoba.");
			fclose(baza);
			return 0;
        	}
	}	
	printf("w bazie nie ma takiej osoby");
	fclose(baza);
	return 0;
 
}

