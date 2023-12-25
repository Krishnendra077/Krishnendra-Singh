// linear search in the arrya
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("enter length of array1\n");
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        printf("enter %dth element\n", i);
        scanf("%d", &arr1[i]);
    }

     for (int i = 0; i < n1; i++)
     {
if (arr1[i] == arr1[i+1])
{
  printf("\nthe same element is  %d ",arr1[i]);
}


     }
    
        return 0;
}