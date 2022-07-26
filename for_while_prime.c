#include <stdio.h>

int main()
{
    int limit, i = 3, for_count, wh_count, num;
    printf("Enter the limit:");
    scanf("%d", &limit);

    printf("Prime nos using for loop\n");
    if (limit >= 1)
    {
        printf("2 ");
    }
    for (for_count = 2; for_count <= limit; i++)
    {
        for (num = 2; num < i; num++)
        {
            if (i % num == 0)
                break;
        }
        if (num == i)
        {
            printf("%d ", i);
            for_count++;
        }
    }

    printf("\nPrime nos using while loop\n");
    if (limit >= 1)
    {
        printf("2 ");
    }
    wh_count = 2;
    i = 3;
    while (wh_count <= limit)
    {
        num = 2;
        while (num < i)
        {
            if (i % num == 0)
                break;
            num++;
        }
        if (num == i)
        {
            printf("%d ", i);
            wh_count++;
        }
        i++;
    }
}