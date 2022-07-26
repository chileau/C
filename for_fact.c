#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter limit:");
    scanf("%d", &n);
    for (int i = 1; i++ < n;)
    {
        fact *= i;
    }
    printf("Factorial:%d", fact);
}