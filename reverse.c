#include <stdio.h>
int main()
{
    int no, rev, d1, d2;
    printf("Enter a 2-digit no:");
    scanf("%d", &no);
    d1 = no / 10;
    d2 = no % 10;
    rev = d2 * 10 + d1;
    printf("The reversed no is:%d", rev);
}