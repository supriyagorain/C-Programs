# include <stdio.h>
# include <math.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    int r,n=0;
    r=a;
    while (r>0)
    {
        r=r/10;
        n++;
    }
    int f, l;
    float p = pow(10,(n-1));
    int g= round(p);
    f=a/g;
    l=a%10;
    int h=0, d=0, e=0, i=0;
    h= a%(g*f);
    i= (h/10)*10;
    d=a/10;
    e=((l*g)+i)+f;
    if(l==0){
        printf("The number after swaping first and last digit is 0%d",e);
    }
    else{
    printf("The number after swaping first and last digit is %d\n",e);
    }
    return 0;
}
