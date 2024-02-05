#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int reactToSigInt=1;

void handleSignal(int sig){
    if (sig==SIGINT && reactToSigInt){
        printf("I`m immortal! My PID: %d\n", getpid());
    }
    else if(sig==SIGHUP){
        printf("I stop reacting to SIGINT!\n");
        reactToSigInt=0
    }
} 


int main(){

    printf("Jestem programem działającym w nieskończonej pętli. Mój PID: %d\n", getpid());


    signal(SIGINT, handleSignal);
    signal(SIGHUP, handleSignal);

    while (1) {
        sleep(1); // Program wykonuje swoje działanie, można go przerwać przez wysłanie sygnałów
    
    }
    return 0;
}