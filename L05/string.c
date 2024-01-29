#include <stdio.h>
#include <string.h>

int my_strlen(char str[])
{
    int count = 0;
    int i = 0;
    while (str[i++])
        count++;

    return count;
}
int main()
{
    // char ch = '-';
    // // char str[] = {'a', 'b', 'c', '\0', 'd', 'e', 'f', '\0'};
    // char str[] = {'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', 'a', 'b', '\0'};
    // printf("%ld\n", sizeof(str) / sizeof(char));
    // printf("%d\n", my_strlen(str));

    // scanf("%c", &ch);
    // printf("%c\n", ch);

    // char c = getchar();
    // printf("%c\n", c);
    // while (getchar() != '\n')
    //     ;

    // scanf("%c", &ch);
    // printf("%c\n", ch);

    // scanf("%c", str);
    // printf("%c\n", str[0]);

    // scanf("%c", str + 7);
    // printf("%c\n", str[1]);

    // scanf("%c", &str[7]);
    // printf("%c\n", str[1]);

    // char str1[10] = {0}; //{'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'}
    // int i = 0;
    // while (9 != i)
    // {
    //     scanf("%c", str1 + i);
    //     i++;
    // }

    // while (9 != i)
    // {
    //     str1[i++] = getchar();
    // }
    // str1[i] = '\0';

    // char str2[50] = {0};
    // puts(str2);
    // putchar('\0');
    // printf("%s", "\0");

    printf("%d\n", 'a');
    printf("%d\n", 'A');
    printf("%d\n", 'a' - 'A');

    printf("%c\n", 'y' - 32);
    printf("%d\n", 'Y');

   
    return 0;
}
