// Find minimum  and average Element in an Array
#include <stdio.h>
int main()
{
    int n, min,larg;
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
        printf("[%d], ", a[i]);
    }

    printf("\n");
    min = a[0];
 
    // minimum vale of the array 
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            
        }
        
    }


    printf("minimum number is %d \n", min);

    // average of the array and the sum of the arrays
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    float avg = sum / n ;
    printf("average of the array is %f\nsum of the given array is  %f ", avg , sum);

    return 0;
}