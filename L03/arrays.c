#include <stdio.h>

int main()
{
    // int[] arr = new int[10]; java
    // int arr[10];
    int arr[10] = {1};

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
    printf("%d\n", arr[5]);

    printf("sizeof int %ld\n", sizeof(int));
    printf("sizeof double %ld\n", sizeof(double));
    printf("sizeof float %ld\n", sizeof(float));
    printf("sizeof char %ld\n", sizeof(char));

    printf("sizeof arr[] %ld\n", sizeof(arr));
    printf("sizeof arr[] %ld\n", sizeof(arr + 1));

    printf("%p\n", arr);
    printf("%p\n", arr + 1);

    printf("Enter number\n");

    int num;
    printf("%d\n", num);
    printf("%p\n", &num);

    scanf("%d", &num);

    printf("%d\n", num);
    printf("%p\n", &num);

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    return 0;
}
