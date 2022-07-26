#include <stdio.h>
#include <math.h>
int fact(int n);
int main()
{
    int x,n;
    printf("Enter the values of x and n respectively: ");
    scanf("%d%d", &x, &n);
    printf("f(%d)=%f", x,1+(pow(x,n)/fact(n)));
    return 0;
}

int fact(int n)
{
    if (n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}