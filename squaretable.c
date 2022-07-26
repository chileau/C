#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter the no. of entries you want in the table:");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("||\t%d\t||\t%d\t||\n", i, i * i);
        ++i;
    }
}