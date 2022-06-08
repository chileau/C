#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three sides of your triangle:");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        printf("Valid triangle\n");
        if (a == b || b == c || c == a)
        {
            if (a == b && b == c)
            {
                printf("Equilateral triangle");
            }
            else
            {
                printf("Isosceles triangle");
            }
        }
        else
        {
            printf("Scalene triangle");
        }
    }
    else
    {
        printf("Not a valid triangle");
    }
}