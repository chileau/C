#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, exp;
    printf("Enter the values of a,b,c,d,e,f,g:");
    scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
    exp = ((a - b / c * d + e) * (f + g));
    printf("The value of the arithmetic expression:%d", exp);
}