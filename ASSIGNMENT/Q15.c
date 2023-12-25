// write a function to calculate the nCr = n!/r!*n!-r!.
#include <stdio.h>
// find the factorial
float factorial(int n);
float factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
        return n = n * factorial(n - 1);
}
// find the combination
float combination(int n, int r);
float combination(int n, int r)
{

    int nCr = factorial(n) / (factorial(r) * factorial(n - r));
    return nCr;
}

int main()
{
    int n, r;
    printf("enter the value to find the factorial of n \n");
    scanf("%d", &n);
    printf("enter the value to find the factorial of r \n");
    scanf("%d", &r);

    printf("result of the factorial is : %f", combination(n, r));

    return 0;
}