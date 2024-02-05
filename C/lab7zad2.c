#include<stdio.h>

int main(){
	int n;
	printf("podaj liczbę");
	scanf("%d", &n);

	int number;
	int i;

	FILE *ujemne;
	ujemne=fopen("ujemne.txt", "w");
	FILE *dodatnie;
	dodatnie=fopen("dodatnie.txt", "w");

	if (ujemne == NULL || dodatnie == NULL) {
        perror("Błąd otwierania pliku");
        return 1;
    	}

	
	for(i=0;i<n;i++){
		
		printf("podaj liczbę");
		scanf("%d", &number);
		
		if(number<0){
			fprintf(ujemne, "Liczba: %d\n", number);
		}
		else if(number>0){
			fprintf(dodatnie, "Liczba: %d\n", number);
		}
		else{
			perror("nieprawidłowa liczba");
			return 1;
		}
	}
	fclose(ujemne);
	fclose(dodatnie);
	return 0;		
}
	
