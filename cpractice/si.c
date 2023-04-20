/* Calculation of simple interest*/
#include<stdio.h>
void main()
{
int p,t;
float r,si;
printf("Enter values of p,t,r");
scanf("%d,%d,%f",&p,&t,&r);
printf("%f\n",si=p*t*r/100);
}

