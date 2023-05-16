#include <stdio.h>
int main()
{
    char s[1000];
    int n;
    printf("Enter a string: ");
    scanf("%s", s);
    for (n = 0; s[n] != '\0'; n++)
        ;
    printf("The characters of the string in reverse order are: \n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c\n", s[i]);
    }
    return 0;
}
