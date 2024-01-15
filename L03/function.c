#include <stdio.h>

int test(int num, int mis);

int main()
{
    float a = test(7, 5);
    printf("%lf",test(7, 5));
    printf("Hello World\n");

    return 0;
}
int test(int num, int mis)
{
    printf("%d\n", num);
    printf("%d \n", num);
    printf(" %d \n", num);
    printf(" %d%d \n", num, mis);
    printf(" %d %d \n", num, mis);
    
    printf(" %d %d \n", num*10, mis*15);
    printf(" %i %i \n", num*10, mis*15);
    printf(" %c %c \n", num*10, mis*15);


    printf(" %s \n", "Hello Edi");

    printf("test\n");


    //System.out.println("Hello world " + mis1 +" ddd " +mis2); java
    //printf("Hello world %d ddd %d\n" , mis1,mis2); c

    return 1;
}

/*
        %c character
        %d decimal (integer) number(base 10)
        % e exponential floating -point number
        % f floating - point number
        % i integer(base 10)
        % o octal number (base 8)
        %s String
        %u unsigned decimal(integer) number
        % x number in hexadecimal(base 16)
        % t formats date/time
        %%print a percent sign
        \%print a percent sign
*/