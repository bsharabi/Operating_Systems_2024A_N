#include "myFunction.h"

void getLocation()
{
    char location[SIZE_BUFF];
    if (getcwd(location, SIZE_BUFF) == NULL)
        printf("Error\n");
    else
    {
        printf("\033[0;34m");
        printf("%s", location);
        printf("\033[0m");
        printf("$ ");
    }
}

char *getInputFromUser()
{
    char ch;
    int size = 1;
    int index = 0;
    char *str = (char *)malloc(size * sizeof(char));
    while ((ch = getchar()) != '\n')
    {
        *(str + index) = ch;
        size++;
        index++;
        str = (char *)realloc(str, size);
    }
    *(str + index) = '\0';
    return str;
}

char **splitArgument(char *str)
{
    char *subStr;
    subStr = strtok(str, " ");
    int size = 2;
    int index = 0;
    char **argumnts = (char **)malloc(size * sizeof(char *));
    *(argumnts + index) = subStr;
    while ((subStr = strtok(NULL, " ")) != NULL)
    {
        index++;
        size++;
        argumnts = (char **)realloc(argumnts, size * sizeof(char *));
        *(argumnts + index) = subStr;
    }
    *(argumnts + (index + 1)) = NULL;

    return argumnts;
}
void logout(char *input)
{
    free(input);
    puts("logout");
    exit(EXIT_SUCCESS); // EXIT_SUCCESS = 0
}
void echo(char **arguments)
{

    // int i = 1;
    // while (*(arguments + i))
    //     printf("%s ", *(arguments + i));
    // i=1
    // while (arguments[i])
    //     printf("%s ", arguments[i]);

    while (*(++arguments))
        printf("%s ", *arguments);

    puts("");
}
void cd(char **path)
{
    // cd "OneDrive - Ariel University"

    // path = [cd,OneDrive,-,Ariel,University",NULL]
    if (strncmp(path[1], "\"", 1) != 0 && path[2] != NULL)
        printf("-myShell: cd: too many arguments\n");

    // else if (strncmp(path[4], "\"", 1) == 0)
    // {
    //     // path = [cd,"OneDrive,-,Ariel,University",NULL]
    //     // int i = 2;
    //     // while (path[i] != NULL)
    //     // {
    //     //     i++;
    //     // }
    //     // path[i - 1];
    //     // size = strlen(path[i - 1])-1
    //     // strcmp(path[i - 1]+size, "\"") == 0
    //     // // path = [cd\0,"OneDrive\0,-\0,Ariel\0,University"\0,NULL]
    //     // // path = [cd\0,"OneDrive,-,Ariel,University"\0,NULL]
    //     if (chdir(path[1]) != 0)
    //     {
    //         printf("-myShell: cd: %s: No such file or directory", path[1]);
    //     }
    // }
    else if (chdir(path[1]) != 0)
        printf("-myShell: cd: %s: No such file or directory\n", path[1]);
}
void cp(char **arguments)
{
    char ch;
    FILE *src, *des;
    if ((src = fopen(arguments[1], "r")) == NULL)
    {
        puts("error");
        return;
    }

    if ((des = fopen(arguments[2], "w")) == NULL)
    {
        puts("error");
        fclose(src);
        return;
    }
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, des);

    fclose(src);
    fclose(des);
}

// input = cd "OneDrive - Ariel University"\0
// after split
// input = cd\0"OneDrive\0-\0Ariel\0University"\0
//[cd\0, "OneDrive\0,  -\0,  Ariel\0,  University"\0,  NULL]

// input = cd\0"OneDrive - Ariel University"\0
//[cd\0, "OneDrive ,  - ,  Ariel ,  University"\0,  NULL]