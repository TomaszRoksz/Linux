#include<stdio.h>

int main(){

	FILE *przedmioty;
	przedmioty=fopen("przedmioty.txt", "w");

	fprintf(przedmioty, "informatyka\nmatematyka\njęzyk angielskie\n");
	fclose(przedmioty);
	return 0;
}