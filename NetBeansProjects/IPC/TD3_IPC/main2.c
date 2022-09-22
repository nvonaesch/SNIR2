/*
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

void traitement(int sig) {
    (void) signal(SIGUSR1, traitement);
    printf("un signal SIGUSR1 je suis PID %d\n", getpid());
}

int main(int argc, char *argv[]) 
{
    int pid, pidP1;
    (void) signal(SIGUSR1, traitement);
    //P1
    pidP1=getpid();
    //Vers la fonction Traitement
    pid = fork();
    if(pid==0) //P2
    {
        pid = fork();
        if (pid == 0) //P3
        {
            printf("P3 pid=%d\n", getpid());
            kill(pidP1, SIGUSR1);
        } else //P2
        {
            printf("P2 pid=%d\n", getpid());
            kill(pidP1, SIGUSR1);
        }
            
    } else { //P1
        printf("Pere pid = %d\n", getpid());
        pause();
        pause();
    }
    return (EXIT_SUCCESS);
}
*/
