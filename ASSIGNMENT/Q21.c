// use the pointer to follow the given Arithmetic
/*  
1.increment a poniter
2.decrement a poniter 
3.add an integer to a pointer 
4.substract an interger from a pointer 
5.substract two pointers of same type 
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int array[5]={1,4,8,3,9};
    int *ptr , *ptr1;
    ptr =array;
    ptr1=&array[4];
    printf("pre increment of pointer is %d\n",++*ptr);
    printf("post increment of array is %d\n",*ptr++);
    printf("add 3 to pointer then value is %d\n",*(ptr+3));
    printf("subtract 1 from pointer then value is %d\n",*(ptr-1));
    printf("subract two pointer we get (size of int)*n\nfor example\n%ld",ptr1-ptr);
    return 0;
}