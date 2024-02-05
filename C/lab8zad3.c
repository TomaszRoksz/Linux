#include<stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    RAND_MAX=50;
    int random_variable=rand() % 51;
    int id=fork();
    wait(NULL);

    if (id!=0){
        while (random_variable%5!=0){
            random_variable=rand() % 51;

            printf("Jestem potomny. Mój identyfikator to: %d\n", getpid());
            printf("wylosowana liczba: %d\n", random_variable);
        }
        int PID=getpid();    
        }
    
    kill(PID);
    printf("Jestem główny. moje PID to: %d\n");

    return 0;
}
