#include <stdio.h>
int main()
{
    int a = 0, b = 1, t;
    printf("%d\n%d\n", a, b);
    for (int i = 3; i <= 10; i++)
    {
        t = a;
        a = b;
        b = t + a;
        printf("%d\n", b);
    }
}