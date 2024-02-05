#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    char ch;
    int size = 0;
    int *arr = (int *)malloc(size * sizeof(int));
    int num;
    scanf("%d", &num);
    while (num >= 0 && num <= 100)
    {
        size++;
        arr = (int *)realloc(arr, size * sizeof(int));
        *(arr + (size - 1)) = num;
        scanf("%d", &num);
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
        printf("%d ", *(arr + i));
    }
    puts("");
    printf("%d\n", sum);

    return 0;
}