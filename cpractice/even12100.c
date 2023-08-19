#include <stdio.h>
int main()
{
    // print even numbers from 1 to 100 using bitwise operator
    int i;
    for (i = 1; i <= 100; i++)
    {
        if ((i & 1) == 0)
        {
            printf("%d\n", i);
        }
    }
}
