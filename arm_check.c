#include <stdio.h>
int main()
{
    int n, r, temp, sum = 0;
    printf("Enter a 3 digit no:");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum += (r * r * r);
        n = n / 10;
    }

    if (temp == sum)
    {
        printf("The no %d is a Armstrong no", temp);
    }
    else
    {
        printf("The no %d is not a Armstrong no", temp);
    }
}
