#include <stdio.h> int main()
{
float a, b, c;
printf("Enter Your Number:\n"); scanf("%f", &a);
if (a >= 0 && a <= 30)
{
printf("Your Input Lies Between 0-30\n");
}
else if (a >= 31 && a <= 50)
{
printf("Your Input Lies Between 31-50\n");
}
else if (a >= 51 && a <= 80)
{
printf("Your Input Lies Between 51-80\n");
}
else if (a >= 81 && a <= 100)
{
printf("Your Input Lies Between 80-100\n");
}
else
{
printf("SORRY Your Input Number is Out of Range\n");
}
return 0;
}