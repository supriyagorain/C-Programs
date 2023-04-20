#include <stdio.h> int main()
{
int a;
printf("Enter a year to check for leap year:\n");
scanf("%d", &a);
if ((a%4==0 && a%100!=0) || (a%400==0))
{
printf("This Year is Leap Year,\n");
}
else
{
printf("This is Not a Leap Year,\n");
}
return 0;
}