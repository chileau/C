#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter the values of a,b,c,d,e:");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    printf("The value of 2 *a % -b + c + 1:%d\n", 2 * a % -b + c + 1);
    printf("The value of 39 / -++e - + 29 % c:%d\n", 39 / -++e - +29 % c);
    printf("The value of 7 - ++a % (3 + b):%d\n", 7 - ++a % (3 + b));
}