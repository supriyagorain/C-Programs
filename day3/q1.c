#include<stdio.h>
void swap(int a, int b);
int main(){
  int i,j;
  printf("Enter First Number: ");
  scanf("%d",&i);
  printf("Enter Second Number: ");
  scanf("%d",&j);
  swap(i,j);
  return 0;
}
void swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("After Swapping First Number = %d\n",a);
    printf("After Swapping Second Number = %d\n",b);
}
