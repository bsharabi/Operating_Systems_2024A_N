
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/wait.h>

void parent()
{
    printf("pid -> %d ", getpid());
    puts("Hello Parent");
}

void child()
{
    printf("pid -> %d ", getpid());
    puts("Hello Child");
}
int main(int argc, char const *argv[])
{
    puts("Hello prog");
    // pid_t pid = fork();
    // child();
    // parent();

    // pid_t pid = fork();
    // if (pid == 0)
    // {
    //     child();
    //     exit(0);
    // }
    // else
    //     parent();
    // puts("end");

    fork();
    fork();
    fork();
    fork();
    child();
    parent();
    puts("end");
    return 0;
}
