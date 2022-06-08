#include <stdio.h>
int main()
{
    int a, b, c, D;
    printf("Enter the coefficients a, b, c of your quadratic equation:");
    scanf("%d%d%d", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    if (D > 0)
    {
        printf("Real and unequal roots");
    }
    else if (D == 0)
    {
        printf("Real and equal roots");
    }
    else
    {
        printf("Complex roots");
    }
}