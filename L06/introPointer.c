#include <stdio.h>
#include <string.h>
#include <ctype.h>

// int a = 4 (The content of a is 4 but the address is 0x7ffd80db23f0)
// int* b = 0x7ffd80db23f0  (The content of b is 0x7ffd80db23f0 but the address is 0x7ffd80db23cc)

void swap(int *a, int *b)
{
    printf("swap:a:address %p\n", a);
    printf("swap:b:address %p\n", b);

    printf("swap:&a:address %p\n", &a);
    printf("swap:&b:address %p\n", &b);

    printf("swap:a %d\n", *a);
    printf("swap:b %d\n", *b);

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("swap:a %d\n", *a);
    printf("swap:b %d\n", *b);
}

int main()
{

    int a = 4, b = 5;
    printf("main:a:address %p\n", &a);
    printf("main:b:address %p\n", &b);

    printf("main:a %d\n", a);
    printf("main:b %d\n", b);

    swap(&a, &b);

    printf("main:a %d\n", a); // 4 or 5
    printf("main:b %d\n", b); // 5 or 4

    char str[100];
    char str1[50];

    char *pStr;
    pStr = str;

    int arr[100];
    int *pArr = arr;

    int **p;
    p = &pArr;

    

    return 0;
}