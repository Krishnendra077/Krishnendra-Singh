// calculate sum of digonal elements of a matrix.
#include <stdio.h>
int main()
{
    int i, j, n  , sum;
    printf("enter the value of matirx :");
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
 
    printf("matrix is :");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
   printf("\n");
sum = 0;

{  
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        if (i==j)
        {    
            sum = sum + a[i][j];
           
        }
         
     
    }
 printf("%d ",sum);
}

 


    return 0;
}