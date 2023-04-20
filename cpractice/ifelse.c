#include<stdio.h>
int main()
{
    int number;
    printf("Pleasr enter a number");
    scanf("%d",&number);
    if(number<100)
    printf("Number is less than 100!\n");
    else if(number==100)
    printf("Number is 100!\n");
    else
    printf("Number is greater than 100!");
    return 0;

}
