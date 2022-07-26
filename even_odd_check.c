#include <stdio.h>
int isEven(int num)
{
    return num % 2;
}

int main()
{
    int val;
    printf("Enter any number: ");
    scanf("%d", &val);

    if (isEven(val) == 1)
    {
        printf("The number is odd.");
    }
    else
    {
        printf("The number is even.");
    }
}
