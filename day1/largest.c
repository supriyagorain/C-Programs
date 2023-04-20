#include <stdio.h> int main()
{
float a, b, c;
printf("Enter Your First Number:\n"); scanf("%f", &a);
printf("Enter Your second Number:\n"); scanf("%f", &b);
printf("Enter Your Third Number:\n"); scanf("%f", &c);
if(a>b && a>c)
{
printf("The Max Number is :%f", a);
}
else if(b>c && b>a)
{
printf("The Max Number is :%f", b);
}
else
{
printf("The Max Number is :%f", c);
}
return 0;
}