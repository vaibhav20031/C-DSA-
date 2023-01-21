#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, n, k;
    float X[10], Y[10], d[10][10], x, t, y = 0, s = 1;
    printf("\nNewton's Divided Interpolation : \n");
    printf("\nEnter the value of n : ");
    scanf("%d", &n);
    printf("\nEnter the value of X[i] and Y[i] : \n");
    printf("\nX[i]\tY[i]\n");
    for (i = 0; i < n; i++)
        scanf("%f%f", &X[i], &Y[i]);
    printf("\nEnter the value of x  : ");
    scanf("%f", &x);
    for (j = 0; j < n; j++)
        for (i = 0; i < n - j; i++)
            d[i][j] = 0;
    for (i = 0; i < n; i++)
        d[i][0] = Y[i];
    for (j = 0; j < n; j++)
        for (i = 0; i < n - j; i++)
        {
            if (j == 0)
                continue;
            d[i][j] = (d[i + 1][j - 1] - d[i][j - 1]) / (X[i + j] - X[i]);
        }
    printf("\n The  Newton Dividede difference table is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            printf("%f\t", d[i][j]);
        }
        printf("\n");
    }
    y = Y[0];
    for (k = 1; k < n; k++)
    {
        s = s * (x - X[k - 1]);
        t = s * d[0][k];
        y = y + t;
    }
    printf("\nAnswer = %f\n\n", y);
}
