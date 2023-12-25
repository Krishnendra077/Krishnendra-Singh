// (a) swap two number using the function
#include <stdio.h>
int swip(int *a, int *b);
int swip(int *a, int *b) // pointer allow to manipulate the memory direction
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a, b, c;
    printf("two numbers a is  :  ");
    scanf("%d", &a);
    printf("two numbers b is  :  ");
    scanf("%d", &b);
    swip(&a, &b); // it is use to address the location of values into the function (calling the function)

    printf("the number is a = %d, b = %d ", a, b);
    printf("\n");

    return 0;
}