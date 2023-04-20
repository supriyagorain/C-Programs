#include<stdio.h>
int main()
{
    float c,fa;
    printf("Enter Temperature in Farenheit\n");
    scanf("%f",&fa);
    c=((fa-32)*5)/9;
    printf("Temperature in Celcius is %f",c);
    return 0;
}