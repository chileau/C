#include <stdio.h>
int main()
{
    int n = 1, pow = 1;
    while (n <= 10)
    {
        printf("%d\n", pow *= 2);
        ++n;
    }
}