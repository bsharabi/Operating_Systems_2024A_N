#include <stdio.h>

int main()
{
    char ch = 'a';
    // char str[] = {'a', 'b', 'c', '\0', 'd', 'e', 'f', '\0'};
    char str[] = {'a', 'b','a', 'b','a', 'b','a', 'b','a', 'b','a', 'b','a', 'b','a', 'b','a', 'b','a', 'b'};
    printf("--------------------------------\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d -> %c \n", str[i], str[i]);
    }
    printf("-----------------while---------------\n");
    int i = 0;
    while (str[i])
    {
        printf("%d -> %c \n", str[i], str[i]);
        i++;
    }
    printf("---------------end while-----------------\n");

    printf("-----------------while---------------\n");
    i++;
    while (str[i])
    {
        printf("%d -> %c \n", str[i], str[i]);
        i++;
    }
    printf("---------------end while-----------------\n");

    char str2[] = "abcd";
    for (int i = 0; i < 5; i++)
    {
        printf("%d -> %c \n", str2[i], str2[i]);
    }
    char str3[5];
    str3[0] = 'a';
    str3[1] = 'b';
    str3[2] = 'c';
    str3[3] = 'd';
    str3[4] = '\0';

    return 0;
}
