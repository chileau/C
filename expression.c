#include <stdio.h>
int eqn(int x);
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("%d", eqn(num));
}

int eqn(int x)
{
    return x * x + 3 * x - 7;
}