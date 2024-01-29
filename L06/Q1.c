#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compare(char s1[], char s2[])
{

    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return 0;
        i++;
    }

    return 1;
}

int compareWithPointer(char *s1, char *s2)
{

    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return 0;
        s1++;
        s2++;
    }
    return 1;
}

int main()
{
    char s1[] = "Rafi";
    char s2[] = "Refi";

    int ans = compare(s1, s2);
    printf("%d\n", ans);

    ans = compareWithPointer(s1, s2);
    printf("%d\n", ans);

    return 0;
}