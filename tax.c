#include <stdio.h>
int main()
{
    float amt, tamt;
    printf("Enter amount to be taxed:");
    scanf("%f", &amt);
    tamt = amt + amt * 5 / 100;
    printf("Amount after taxation:%f", tamt);
}
