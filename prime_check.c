#include <stdio.h>
int main()
{
    int n, prime = 0;
    printf("Enter the no you want to check:");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    for (int i; ++i < n / 2;)
    {
        if (n % i == 0)
        {
            prime = 1;
        }
    }
    if (prime == 0)
    {
        printf("The no %d is a prime no", n);
    }
    else
    {
        printf("The no %d is not a prime no", n);
    }
}