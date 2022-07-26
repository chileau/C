#include <stdio.h>
int main()
{
    int sum = 0, n, i = 0;
    printf("Enter your number (0 terminates the loop): ");
    scanf("%d", &n);
    while (n != 0)
    {
        sum += n;

        printf("Enter your number (0 terminates the loop): ");
        scanf("%d", &n);
        i++;
    }
    if (i != 0)
    {
        printf("avg: %f", (float)sum / i);
    }
    else
    {
        printf("Program Terminated without input");
    }
}