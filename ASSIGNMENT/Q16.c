// RECURSIVE FUNCTION FOR THE FIBONACCI SERIES.
#include <stdio.h>
int ser(int);
int ser(int n)
{
    if (n < 2)
        return n;
    else
        return ser(n - 1) + ser(n - 2);
    return 0;
}

int main()
{
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    printf("The term is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ser(i));
    }
    

    return 0;
}
