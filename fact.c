#include <stdio.h>
int main()
{
    int i = 1, n, fact = 1;
    printf("Enter limit:");
    scanf("%d", &n);
    while (i++ < n)
    {
        fact *= i;
    }
    printf("Factorial:%d", fact);
}