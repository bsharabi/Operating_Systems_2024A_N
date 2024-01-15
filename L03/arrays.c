#include <stdio.h>

int main()
{
    // int[] arr = new int[10]; java
    // int arr[10];

    int arr[10];
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 0;
    printf("--------arr----------\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("---------------------\n");

    printf("--------arr2----------\n");
    int arr2[10] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr2[i]);
    }
    printf("---------------------\n");

    printf("--------arr3----------\n");
    int arr3[] = {1, 2, 3, 4, 5};
    //                          20    /        4    =   5
    for (int i = 0; i < sizeof(arr3) / sizeof(int); i++)
    {
        printf("%d\n", arr3[i]);
    }
    printf("---------------------\n");

    printf("sizeof int %ld\n", sizeof(int));
    printf("sizeof double %ld\n", sizeof(double));
    printf("sizeof float %ld\n", sizeof(float));
    printf("sizeof char %ld\n", sizeof(char));

    printf("sizeof arr[] %ld\n", sizeof(arr));         // sizeof(0x0876387623f4)
    printf("sizeof address %ld\n", sizeof((arr + 1))); // sizeof((0x0876387623f4 + 1) = 0x0876387623f8)

    printf("%p\n", arr);
    printf("%p\n", arr + 1);

    printf("Enter number\n");

    int num = 4;
    printf("%d\n", num);
    printf("%p\n", &num);

    //   1 2 3 4 ... 17
    // 1 [[0,0,0,0,0,1,0,0],0,0,0,0,0,0,0,0]
    // 2 [[0,1,0,1,0,1,0,1],0,0,0,0,0,0,0,0]
    // 3 [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
    // 4 [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
    // 5 [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]

    printf("------------------------------\n");
    printf("%p\n", arr);
    printf("------------------------------\n");

    scanf("%d", &num);

    printf("%d\n", num);
    printf("%p\n", &num);

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", arr + i);
        scanf("%d", &arr[i]);
    }

    return 0;
}
