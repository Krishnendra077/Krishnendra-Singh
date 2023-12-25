// Sum of Array Elements
#include <stdio.h>
int main()
{
    int n ;
    printf("number of elements in the array  :");
    scanf("%d",&n);

    int sum = 0, a[n] ;
   
   
    for (int i = 0; i <n ; i++)
    {  
         scanf("%d",&a[i]);
       
    }
    printf("\n");

for (int i = 0; i < n; i++)
{
   printf("[%d] + ",a[i]);
   sum = a[i]  + sum ; 
}
 printf("=  [%d]\n",sum);

    return 0;
}