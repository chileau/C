#include <stdio.h>
#define PI 3.14159
int main()
{
    float r;
    printf("Enter radius:");
    scanf("%f", &r);
    printf("The area of circle with radius %.4f is %.4f", r, PI * r * r);
}