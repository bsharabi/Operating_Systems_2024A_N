#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *str_str(char *s1, char *s2)
{

    char *p1 = NULL;
    char *p2 = NULL;
    char *cp = s1;

    if (*s2 == '\0')
        return s1;

    // *cp = B
    // *p1 = NULL
    // *p2 = NULL
    while (*cp != '\0')
    {
        p1 = cp;
        p2 = s2;

        // iter 1
        //  *cp = B
        //  *p1 = B
        //  *p2 = l

        // iter 2
        // *cp = a
        // *p1 = a
        // *p2 = l

        // iter 3
        // *cp = ' '
        // *p1 = ' '
        // *p2 = l

        // iter 4
        //  *cp = l
        //  *p1 = l
        //  *p2 = l

        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
            // iter 4.1
            //  *cp = l
            //  *p1 = o
            //  *p2 = o

            // iter 4.2
            // *cp = l
            // *p1 = ' '
            // *p2 = '\0'
        }

        if (*p2 == '\0')
            return cp;

        cp++;
    }

    return NULL;
}

int main()
{

    char s1[] = "Ba lo naspik et kol ahomer";
    char s2[] = "lo";

    puts(s1);
    puts(s2);

    char *p = str_str(s1, s2);

    puts(p);

    puts(s1 + 3);

    return 0;
}