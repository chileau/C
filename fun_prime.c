#include <stdio.h>

int prime(int n);
int main()
{
    int limit;
    printf("Enter the limit");
    scanf("%d", &limit);
    prime(limit);
}

int prime(int n)
{
    int i, num = 2, count=0;
    for (count = 2; count <= n; i++)
    {
        for (num = 2; num < i; num++)
        {
            if (i % num == 0)
                break;
        }
        if (num == i)
        {
            printf("%d ", i);
            count++;
        }
    }
}