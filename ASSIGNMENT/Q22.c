// calculating the factorial of the number using recursion
#include<stdio.h>
int factorial(int number)
{
 if ( number > 0)
 {
 return number *  factorial(number - 1);
 }
else 
 return 1;

 
}
int main(){
     int number;
     printf("enter the number to get its factorial :");
     scanf("%d",&number);
     int fact = factorial(number);
     printf("%d %d",fact, number);
return 0;
}