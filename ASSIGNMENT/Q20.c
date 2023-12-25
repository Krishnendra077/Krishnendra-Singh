// swap two number using pointer
#include <stdio.h>
void swap(int *a, int *b){

    int num = *a ;
    *a = *b ;
    *b = num;
    return;
}
int main()
{
    int a;
    printf("enter the value of a :");
    scanf("%d", &a);
    int b;
    printf("enter the value of b :");
    scanf("%d", &b);
    swap(&a,&b);

    printf("vale of a = %d \n vale of b = %d ",a,b);
    return 0;
}