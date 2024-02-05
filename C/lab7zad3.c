#include<stdio.h>

int main(){

	char napis1[100];
	char napis2[100];

	printf("Podaj pierwszy napis: ");
	scanf("%s", &napis1);

	printf("Podaj drugi napis: ");
	scanf("%s", &napis2);

	FILE *predzej;
	predzej=fopen("predzej.txt", "w");
	
	if(strcmp(napis1, napis2)>0){
		fprintf(predzej, "szybciej jest: %s \n", napis2);
	}
	else if(strcmp(napis2, napis1)<0){
		fprintf(predzej, "szybciej jest: %s \n", napis1);
	}
	else if(strcmp(napis1,napis2)==0){
		perror("napisy te same \n");
		return 1;
	}
	
	fclose(predzej);
	
	return 0;
}


	
	
