// using switch to perform mathematical operation
#include <stdio.h>
#include <math.h>
int main()
{   int n;
    float  a, b, c;
    printf("Enter 1 to 5 any number to perform the mathematical operation ");
    scanf("%d", &n);
    printf("Enter the value of a :");
    scanf("%f", &a);
    printf("Enter the value of b :");
    scanf("%f", &b);
 
  

    switch (n)
    {
    case 1:
        c = a + b;
        printf("addition of a+b is : %f ", c);
        break;
    case 2:
        c = a - b;
        printf("subtraction of a-b is : %f ", c);
        break;
    case 3:

        c = a * b;
        printf("multiplication of a and b is : %f ", c);
        break;
    case 4:
        c = a / b;
        printf("division of a by b is : %f ", c);
        break;
    case 5:
        
        c = pow(a,b);
        printf("a^b is equal : %f ",c);
        break;
    }
    return 0;
}