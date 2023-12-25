// Calculate Factorial using Loops
#include<stdio.h>
int main(){
     int n ;
     printf("enter the number ");
     scanf("%d",&n);
     int a = 1 ;
     for ( int i = 1; i <= n; i++)
     {
       a = i * a ;
      printf("factorial of %d is   %d \n",i,a);
     }
    
return 0;
}