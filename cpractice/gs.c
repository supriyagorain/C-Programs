/*calculate gross salary*/
#include <stdio.h>
int main()
{
    float bs,da,hra,gs;
    printf("\nEnter basic salary of Ramesh:");
    scanf("%f",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    gs=bs+da+hra;
    printf("Basic Salary of Ramesh is%f\n",bs);
    printf("Dearness Allowance is%f\n",da);
    printf("House Rent Allowance is%f\n",hra);
    printf("Gross Salary of Ramesh is%f\n",gs);
    return 0;
}