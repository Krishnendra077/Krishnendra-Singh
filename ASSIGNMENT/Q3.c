// sum of natural number 
#include<stdio.h>
int main(){
     int n ;
     printf("enter the natural nunber :");
     scanf("%d",&n);
     int sum = 0 ; 
     for (int i = 1; i < n; i++)
     {
        
        sum = sum + i ;

       
         
     }
     printf("%d",sum);
return 0;
}