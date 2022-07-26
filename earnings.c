#include <stdio.h>
int main()
{
    int sal = 1;
    float sum = 0.0;
    for (int i = 1; i <= 24; i++)
    {
        sum += (float)sal;
        sal *= 2;
        printf("Salary after %d month(s):\t%.2f rupee(s)\n", i, sum);
    }
}