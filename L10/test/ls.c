
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    printf("%d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        puts(argv[i]);
    }
    puts("--------------------kk");
    char *str[10] = {"ls", "-l", NULL};
    execvp(str[0], str);

    puts("--------------------kk");

    return 0;
}
