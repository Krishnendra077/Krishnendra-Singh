// multiplication in the 2d arrays.
#include <stdio.h>
int main()
{
    int r1, r2, c1, c2;
    int i, j, k;
    printf("row and column in matrix a :");
    scanf("%d%d", &r1, &c1);
    int a[r1][c1];
    printf("row and column in in matirx b :");
    scanf("%d%d", &r2, &c2);
    int b[r2][c2];
    int c[r1][c2];
    printf("elements of matrix a is :");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix a is :\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    printf("elements of matrix b is :");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("matrix b is :\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", b[i][j]);
        }

        printf("\n");
    }

    printf("product of a matrix is :");
    if (c1 == r2)
    {
        for (int i = 0; i < r1; i++)
        {

            for (int j = 0; j < c2; j++)
            {
                c[i][j] = 0;

                for (int k = 0; k < c1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }

                printf("%d ", c[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}