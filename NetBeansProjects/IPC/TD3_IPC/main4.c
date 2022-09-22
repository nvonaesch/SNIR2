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
    int pid, pidP1, pidP2;
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
            pidP2 = getppid();
            printf("P3 pid=%d\n", getpid());
            sleep(2); //tempo pour envoyer signal en décalé
            kill(pidP2, SIGUSR1);
        } else //P2
        {
            printf("P2 pid=%d\n", getpid());
            pause();
            pause();
        }
    } else { //P1
        pidP2=pid;
        printf("pere pid=%d\n", getpid());
        sleep(1);
        kill(pidP2, SIGUSR1);
        sleep(2);
    }
    return (EXIT_SUCCESS);
}
//5) P1 ne sait pas que P3 existe et ne peux donc pas communiquer avec lui.