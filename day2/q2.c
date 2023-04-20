#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num > 0) {
        printf("Enter another integer: ");
        scanf("%d", &num);
    }

    printf("You entered a negative integer or zero.\n");
    return 0;
}
