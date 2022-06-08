#include <stdio.h>
int main()
{
    float units, tariff;
    printf("Enter no of units consumed in the month:");
    scanf("%f", &units);
    if (units <= 40)
    {
        tariff = 50 + 1.50 * units;
    }
    else if (units > 40 && units <= 80)
    {
        tariff = 50 + 1.50 * 40 + 1.90 * (units - 40);
    }
    else
    {
        tariff = 50 + 1.50 * 40 + 1.90 * 40 + 2.20 * (units - 80);
    }
    printf("\n");
    printf("\tTariff Rates\n");
    printf("Rs 1.5/unit upto 40 units\n");
    printf("Rs 1.9/unit from 41 to 80 units\n");
    printf("Rs 2.2/unit for 81 units and above\n");
    printf("==============================\n");
    printf("No of units consumed: %.2f\n", units);
    printf("Amount to be paid: Rs. %.3f", tariff);
}