#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 50)
    {
        printf("%d\t", 2 * i);
        if (!(i % 5))
            printf("\n");
        i++;
    }
}