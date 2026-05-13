#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main( int argc, char *argv[]) {
    pid_t pid = fork();
    if (pid == 0) { 
        printf(" I am the child process: %d\n", getpid());
    }
    else
    {

        printf(" I am the parent process: %d\n", getppid());
        }

    return 0;

    }
