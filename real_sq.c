#include <stdio.h>

float real_sq(float num);

int main()
{
    float val, square;

    printf("Enter an no : ");
    scanf("%f", &val);

    square = real_sq(val);

    printf("Square of no is : %.4f ", square);
}

float real_sq(float num)
{
    return num * num;
}