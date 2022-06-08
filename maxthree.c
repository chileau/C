#include <stdio.h>
int main()
{
    int m, n, p, max;
    printf("Enter three nos:");
    scanf("%d%d%d", &m, &n, &p);
    if (m >= n && m >= p)
    {
        max = m;
    }
    else if (n >= m && n >= p)
    {
        max = n;
    }
    else
    {
        max = p;
    }
    printf("The maximum of %d, %d, %d is: %d\t", m, n, p, max);
}