#include <stdio.h>

int main()
{
    int a[2][3] = {{1, 2, 3}, {1, 2, 3}};
    int b[2][3] = {{1, 2, 3}, {1, 2, 3}};
    int sum[2][3], i, j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of two matrices:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}