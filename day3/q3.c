#include <stdio.h>
void main(){
    int row,column;
    printf("Enter the number: ");
    scanf("%d %d",&row,&column);
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j <column; j++)
        {
            if (i==0 || j==0 || i==row-1 || j==column-1)
            {
                printf("* ");
            }else{
                printf("  ");
            }
            
        }
        printf("\n");
        
    }
    
}
