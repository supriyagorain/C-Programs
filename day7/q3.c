#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter the size of the first array : ");
    scanf("%d", &n1);
    int a1[n1];
    printf("Enter the first array elements:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter the size of the second array : ");
    scanf("%d", &n2);
    int a2[n2];
    printf("Enter the second array elements:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &a2[i]);
    }
    int b[1000];
    int k = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a1[i] == a2[j])
            {
                b[k] = a1[i];
                k++;
            }
        }
    }
    printf("The common elements are: { ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }
    printf("}");
    return 0;
}