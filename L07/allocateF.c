#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    puts("allocateF");
    char str[100];
    // puts(str);

    int *arr = (int *)malloc(10 * sizeof(int));
    free(arr);
    // int *arr1 = (int *)malloc(10 * sizeof(int));
    // arr=arr1;

    while (1)
    {
        char ch;
        ch = getchar();

        if (ch == '1')
        {
            int size = 1;
            int index = 0;
            char *str = (char *)malloc(size * sizeof(char));
            puts("enter char");
            getchar();
            while ((ch = getchar()) != '\n')
            {
                *(str + index) = ch;
                size++;
                index++;
                str = (char *)realloc(str, size);
            }
            *(str + index) = '\0';
            // str[index]='\0';
            puts(str);
            printf("%ld\n", strlen(str));
            free(str);
        }
        else if (ch == '2')
        {
            puts("exit");
            break;
        }
    }

    return 0;
}