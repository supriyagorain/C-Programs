#include <stdio.h>  
int main()  
{  
    int k;   
   for(int i=1;i<=4;i++)  
   {  k=1;
       for(int j=1;j<=8;j++) 
       if(j>=6-i && j<=4+i && k) 
       {  
           printf("*");;
           k=0;  
       } else
       {  
         printf(" ");
         k=1;  
       }  
       
      printf("\n");  }
      
    return 0;  
}  
