#include<stdio.h>
int main()
{
    int width = 1189,height = 841, temp;

    for(int i=0;i<=8;i++)
    {
        printf("A%d:%dx%d\n",i,width,height);
        temp=width; //temp=1189
        width=height; //width=841
        height=temp/2; //height=
    }

}