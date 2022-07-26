#include <stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter the the limit of no.s:");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i * i;
        i++;
    }
    printf("Program Terminated\nThe sum of squares of numbers till %d:%d", n, sum);
}