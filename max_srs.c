#include <stdio.h>
int main()
{
    int n, max;
    printf("Enter first number (0 to terminate):");
    scanf("%d", &n);
    max = n;
    while (n != 0)
    {
        printf("Enter any number to compare (0 to terminate):");
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
        }
    }
    printf("Program Terminated\nThe maximum of the series:%d", max);
}