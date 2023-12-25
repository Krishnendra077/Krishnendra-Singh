//  Basic Array Operations: Write a program to traverse an array and print the odd-indexed elements.
#include <stdio.h>
int main()
{
    int n, i, odd ;
    printf(" array of n elements :");
    scanf("%d", &n);
    int a[n];
    printf("elements of the array is :");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

printf("odd indexed number are :");
 printf("\n");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
         
          printf("%d ", a[i]);

        }
       
    }

    return 0;
}