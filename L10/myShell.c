#include "myShell.h"
#include "myFunction.h"

int main()
{

    welcome();
    while (1)
    {
        getLocation();
        char *input = getInputFromUser();
        if (strcmp(input, "exit") == 0 || strncmp(input, "exit ", 5) == 0)
            logout(input);

        char **arguments = splitArgument(input);

        if (strcmp(input, "echo") == 0)
            echo(arguments);
        else if (strcmp(input, "cd") == 0)
            cd(arguments);
        else if (strcmp(input, "cp") == 0)
            cp(arguments);
        else if (strcmp(input, "delete") == 0)
            delete(arguments);
        else if (strcmp(input, "dir") == 0)
            get_dir(arguments);
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