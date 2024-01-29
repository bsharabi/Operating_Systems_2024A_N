#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap(int a, int b)
{
    printf("swap:a %d\n", a);
    printf("swap:b %d\n", b);
    int temp = a;
    a = b;
    b = temp;

    printf("swap:a %d\n", a);
    printf("swap:b %d\n", b);

    printf("swap:a:address %p\n", &a);
    printf("swap:b:address %p\n", &b);
}

int main()
{

    int a = 4, b = 5;
    printf("main:a %d\n", a);
    printf("main:b %d\n", b);

    swap(a, b);

    printf("main:a %d\n", a); // 4 or 5
    printf("main:b %d\n", b); // 5 or 4

    printf("main:a:address %p\n", &a);
    printf("main:b:address %p\n", &b);

    return 0;
}