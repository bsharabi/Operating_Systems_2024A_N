#include <stdio.h>
#define SIZE 80
#include <string.h>
int main()
{
    char str[SIZE] = {0};
    char backupStr[SIZE] = {0};
    int i = 0;
    char ch;
    while (i != SIZE)
    {
        ch = getchar();
        if (ch == '\n')
            break;
        str[i] = ch;
        i++;
    }
    puts(str);
    printf("%ld\n", strlen(str));
    int index = 0;
    while (str[index])
    {
        backupStr[index] = str[index];
        index++;
    }

    puts(backupStr);
    printf("%ld\n", strlen(backupStr));
    int upper = 0, digit = 0, lower = 0, cntChar = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
            lower++;

        else if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= '0' && str[i] <= 57)
            digit++;
        else
            cntChar++;
        i++;
    }

    printf("lower %d\n", lower);
    printf("upper %d\n", upper);
    printf("digit %d\n", digit);
    printf("cntChar %d\n", cntChar);

      i = 0;
    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i]-=32;

        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i]+=32;
        i++;
    }
    puts(str);
    puts(backupStr);

    return 0;
}
