#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter first number (0 to terminate):");
    scanf("%d", &n);
    while (n != 0)
    {
        sum += n;
        printf("Enter any number (0 to terminate):");
        scanf("%d", &n);
    }
    printf("Program Terminated\nThe sum of the series:%d", sum);
}