// Find Largest Element in an Array
#include <stdio.h>
int main()
{
    int n, larg;
    printf("elements in the array is ");
    scanf("%d", &n);
    printf("elements in the array is :\n");
    int a[n];
    int b;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }

    printf("\n");
larg = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= larg)
        {
            larg = a[i];
        }
    }
    printf("largest number is %d", larg);

    return 0;
}