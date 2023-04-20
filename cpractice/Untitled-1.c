#include <stdio.h>

int main() {
    char subject, maths = 'M', science = 'S', mathsscience = 'B';
    printf("Enter the subjects you have passed\n");
    scanf("%c",&subject);
    if(subject == maths){
        printf("You will get 15 rupees");
    }
    else if (subject == science){
        printf("you will get 15 rupees");
    }
    else if(subject == mathsscience){
        printf("You will get 40 rupees");
    } 
    return 0;
}
