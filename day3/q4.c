#include<stdio.h>
int main(){
    int a,i,j,count=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=a; i>0; i++){
        count=0;
        for(j=1; j<=i; j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count == 2){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
