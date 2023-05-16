#include <stdio.h>

void main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int a[n], b[n - 1];
    printf("Enter array number: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < (n - 1); i++)
    {
        b[i] = a[i] - a[i + 1];
    }
    printf("Difference between consecutive Array Elements are: \n");
    for (int i = 0; i < (n - 1); i++)
    {
        if (b[i] < 0)
        {
            b[i] = b[i] * (-1);
        }
        printf("%d\n", b[i]);
    }
    int max;
    max = b[0];
    for (int i = 1; i < (n - 1); i++)
    {
        if (max < b[i])
        {
            max = b[i];
        }
    }
    printf("The max difference is = %d\n", max);
}