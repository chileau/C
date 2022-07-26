#include <stdio.h>
int main()
{
    float a = 0, b = 1, t;
    int limit, c = a + b;
    printf("Enter the limit:");
    scanf("%d", &limit);

    while (limit != 0)
    {
        printf("%f\n", b / a);
        a = b;
        b = c;
        c = a + b;
        limit--;
    }
}