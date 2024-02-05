#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("wpisz d jesli chcesz usunac plik, c jesli chcesz go skopiowac i m jesli chcesz go przeniesc.");
    char decision;
    scanf(" %c", &decision);

    switch(decision){
        case 'd':
            system("rm przedmioty.txt");
            break;
        case 'c':
            system(R"cp przedmioty.txt C:\Users\bogda\OneDrive\Dokumenty\SO\inne");
            break;
        case 'm':
            system(R"mv przedmioty.txt inne");
            break;
        default:
            printf("nie dokonano prawidlowego wyboru\n");
            break;
    }
    return 0;
}