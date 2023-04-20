#include<stdio.h>
int main()
{
int a;
printf("Enter a value of A:\n"); scanf("%d", &a);
a = a << 2 ;
printf("Output after shifting Input by two Bits:%d\n",a);
return 0;
}