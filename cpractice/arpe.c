#include<stdio.h>
int main ()
{
    float l,b,r,ar,p,ac,c;
    printf("Enter the length,breadth of rectangle & radius of circle\n");
    scanf("%f %f %f",&l,&b,&r);
    ar=l*b;
    p=(2*(l+b));
    ac=(3.14*r*r);
    c=(2*3.14*r);
    printf("The area of rectangle is %f\n",ar);
    printf("The perimeter of rectangle is %f\n",p);
    printf("The area of circle is %f\n",ac);
    printf("The circumference of circle is %f\n",c);
    return 0;
}