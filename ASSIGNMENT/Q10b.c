#include <stdio.h>
int swip(int *a, int *b);
int swip(int *a, int *b)
{

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    return 0;
}

int main()
{
    int a, b, n;

    printf("two numbers a is  :  ");
    scanf("%d", &a);
    printf("two numbers b is  :  ");
    scanf("%d", &b);
    swip(&a, &b);
    printf("vale of a %d = , value of %d ", a, b);

    return 0;
}