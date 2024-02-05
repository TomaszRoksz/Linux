#include<stdio.h>

int main(){
    #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char decision;
    
    printf("Wybierz typ archiwum:\n");
    printf("t - tar\n");
    printf("z - zip\n");
    scanf(" %c", &decision);

    switch (decision) {
        case 't':
            // Tworzenie archiwum tar
            system("tar -cvf temp.tar temp");
            break;
        case 'z':
            // Tworzenie archiwum zip
            system("zip -r temp.zip temp");
            break;
        default:
            printf("Nieprawidlowy wybor.\n");
            return 1;
    }

    printf("Archiwum utworzone.\n");

    return 0;
}

}