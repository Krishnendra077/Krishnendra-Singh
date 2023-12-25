// addition of a matrix
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3],c[3][3];
    printf("number of elecments in the matrix a is :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix a is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
    printf("number of elecments in the matrix b is :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("matrix b is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }

        printf("\n");
    }

    printf(" additon of a and b matrix is : ");
     
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }
    

    return 0;
}