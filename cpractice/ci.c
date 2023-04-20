#include <stdio.h> 
#include <math.h> 
int main() 
{ 
    float principal, rate, time, ci; 
  
    printf("Enter the principal amount: "); 
    scanf("%f", &principal); 
  
    printf("Enter the time period (in years): "); 
    scanf("%f", &time); 
  
    printf("Enter the rate of interest: "); 
    scanf("%f", &rate); 
  
    ci = principal * (pow((1 + rate / 100), time)); 
  
    printf("Compound Interest = %f", ci); 
  
    return 0; 
}