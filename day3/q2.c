#include <stdio.h>
void perfect(int a){
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if(a%i == 0){
            sum+=i;
        }
    }
    if (sum == a)
    {
        printf("It's Perfect Number");
    }else{
        printf("Number is not Perfect");
    }
    
    
}

void main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    perfect(a);
}

