#include <stdio.h>
#include <math.h>

int initial;
float final;

int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    final = sqrt((float)num);
    initial = final;

    if (initial == final)
        printf("%d is a perfect square.", num);
    else
        printf("%d is not a perfect square.", num);

}
