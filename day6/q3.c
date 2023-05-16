#include<stdio.h>
int main(){
   int num, rem, reverse_num, temp, end;

   printf("Enter the upper limit 'n': ");
   scanf("%d",&end);

   printf("Palindrome numbers between 1 and %d are:\n ",end);
   for(num=1;num<=end;num++){
      temp=num;
      reverse_num=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         reverse_num=reverse_num*10+rem;
      }
      if(num==reverse_num)
         printf("%d ",num);
   }
   return 0;
}