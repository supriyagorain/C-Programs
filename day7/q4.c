#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    int *ptra = &a;
    int *ptrb = &b;
    int c = *ptra + *ptrb;
    printf("The sum of the two numbers is %d \n", c);
    return 0;
}