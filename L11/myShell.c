#include "myShell.h"
#include "myFunction.h"

int main()
{

    welcome();
    while (1)
    {
        int piping = 0;
        getLocation();
        char *input = getInputFromUser();
        if (strcmp(input, "exit") == 0 || strncmp(input, "exit ", 5) == 0)
            logout(input);
        char **arguments = splitArgument(input);
        int i=0;
        while(*(arguments+i)!=NULL){
            puts(*(arguments+i));
            i++;
        }
        if (strcmp(input, "echo") == 0)
            echo(arguments);
        else if (strcmp(input, "cd") == 0)
            cd(arguments);
        else if (strcmp(input, "cp") == 0)
            cp(arguments);
        else if (strcmp(input, "delete") == 0)
            delete (arguments);
        else if (strcmp(input, "dir") == 0)
            get_dir(arguments);
        else if (piping)
        {
            // indexPipe
            // arguments[indexPipe]=NULL;
            // mypipe(arguments, arguments+indexPipe+1);
            mypipe(arguments, arguments+/*indexPipe*/+1);
            wait(NULL);
        }
        else
        {
            systemCall(arguments);
            wait(NULL);
        }
        free(arguments);
        free(input);
    }
    return 0;
}
void welcome()
{
    puts("Welcome to my Shell");
}