#include <stdio.h>

int factorial(int n);
int max(int a, int b);
int sum(int n);
int _pow(int base, int exp);

int main()
{

    int ans = factorial(10);
    printf("%d\n", ans);
    ans = sum(10);
    printf("%d\n", ans);
    ans = max(10, 7);
    printf("%d\n", ans);
    ans = _pow(10, 5);
    printf("%d\n", ans);

    return 0;
}

int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }

    return f;
}
int max(int a, int b)
{
    // if (a < b)
    //     return b;
    // return a;
    return (a < b) ? b : a;
}
int sum(int n)
{
    int s = 0;
    for (int i = 0; i <= n; i++)
    {
        s += i;
    }

    return s;
}
int _pow(int base, int exp)
{
    int p = 1;
    for (int i = 0; i < exp; i++)
    {
        p *= base;
    }
    return p;
}