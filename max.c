#include <stdio.h>
int main()
{
    int m, n, p, max;
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
    printf("The maximum is: %d\t", max);
}
/* max=m           -
if(n>max)           |
    max=n;          | //faster
if(p>max)           |
    max=p;*/
//    -
