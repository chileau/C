#include <stdio.h>
int main()
{
    int amt, notes20, notes10, notes5, notes1, balance;
    printf("Enter an amount in Rupees:");
    scanf("%d", &amt);
    notes20 = amt / 20;
    balance = amt - (notes20 * 20);
    notes10 = balance / 10;
    balance -= notes10 * 10;
    notes5 = balance / 5;
    balance -= notes5 * 5;
    notes1 = balance;
    printf("No of 20 notes:%d\n", notes20);
    printf("No of 10 notes:%d\n", notes10);
    printf("No of 5 notes:%d\n", notes5);
    printf("No of 1 notes:%d\n", notes1);
}
