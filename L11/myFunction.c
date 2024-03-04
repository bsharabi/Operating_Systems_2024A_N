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

    while (*(++arguments))
        printf("%s ", *arguments);

    puts("");
}
void cd(char **path)
{

    if (strncmp(path[1], "\"", 1) != 0 && path[2] != NULL)
        printf("-myShell: cd: too many arguments\n");

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
void get_dir()
{
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir("./")) == NULL)
    {
        perror("");
        return;
    }
    while ((ent = readdir(dir)) != NULL)
        printf("%s ", ent->d_name);
    puts("");
}
void delete(char **path)
{
    if (unlink(path[1]) != 0)
        printf("-myShell: delete: %s: No such file or directory\n", path[1]);
}
void systemCall(char **arguments)
{
    pid_t pid = fork();
    if (pid == -1)
    {
        printf("fork err\n");
        return;
    }
    if (pid == 0)
    {
        if (execvp(arguments[0], arguments) == -1)
            exit(EXIT_FAILURE);
    }
}
void mypipe(char **argv1,char ** argv2){

    int fildes[2];
    if (fork() == 0)
    {
        pipe(fildes);
        if (fork() == 0)
        {
            /* first component of command line */
            close(STDOUT_FILENO);
            dup(fildes[1]);
            close(fildes[1]);
            close(fildes[0]);
            execvp(argv1[0], argv1);
        }
        /* 2nd command component of command line */
        close(STDIN_FILENO);
        dup(fildes[0]);
        close(fildes[0]);
        close(fildes[1]);
        /* standard input now comes from pipe */
        execvp(argv2[0], argv2);
    }
}