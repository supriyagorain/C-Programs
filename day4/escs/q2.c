#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int b[100];
    int a = n;
    int c;
    int d;
    int i = 0;
    while (a > 0)
    {
        d = a % 10;
        a = a / 10;
        b[i] = d;
        c++;
        i++;
    }
    int h = 0, s = 0, e = 0, y = 0, o = 0, q = 0, u = 0, t = 0, p = 0, g = 0;
    for (int j = 0; j < i; j++)
    {
        if (b[j] == 0)
        {
            h++;
        }
        else if (b[j] == 1)
        {
            s++;
        }
        else if (b[j] == 2)
        {
            e++;
        }
        else if (b[j] == 3)
        {
            y++;
        }
        else if (b[j] == 4)
        {
            o++;
        }
        else if (b[j] == 5)
        {
            q++;
        }
        else if (b[j] == 6)
        {
            u++;
        }
        else if (b[j] == 7)
        {
            t++;
        }
        else if (b[j] == 8)
        {
            p++;
        }
        else if (b[j] == 9)
        {
            g++;
        }
    }
    printf("The frequency of each digit is : ");
    printf("0- %d times, 1- %d times, 2- %d times, 3- %d times, 4- %d times, 5- %d times, 6- %d times, 7- %d times, 8- %d times, 9- %d times.", h, s, e, y, o, q, u, t, p, g);
    return 0;
}