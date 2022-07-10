#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter non- negative number");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Enter non- negative number");
    }
    else
    {
        do
        {
            count++;
            n = n / 10;
        } while (n > 0);
    }
    printf("%d", count);
}