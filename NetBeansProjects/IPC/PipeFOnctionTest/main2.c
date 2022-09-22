
#include <stdio.h>
#include <stdlib.h>


int main() {
    int nbOctets;
    int descTube[2];
    const char chaine[] = "Salut papa!";
    char buffer[BUFSIZ];
    pid_t pid;
    memset(buffer, "\0", BUFSIZ);
    
    if(pipe(descTube)==0){
        pid = fork();
        if(pid == -1){
            fprintf(stderr,"Pbdefork");
            exit(EXIT_FAILURE);
        }
    }
    return (EXIT_SUCCESS);
}

