#include <stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter the values of a,b,c,d,e:");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    printf("The value of a / b / c: %f\n", a / b / c);
    printf("The value of 7 + c *--d / e:%f\n", 7 + c * --d / e);
    // printf("The value of 2 *a % -b + c + 1:%d\n", 2 * a % -b + c + 1);
    // printf("The value of 39 / -++e - + 29 % c:%d\n", 39 / -++e - +29 % c);
    printf("The value of a += b += c += 1 + 2:%f\n", a += b += c += 1 + 2);
    //printf("The value of 7 - ++a % (3 + b):%d", 7 - ++a % (3 + b));
}