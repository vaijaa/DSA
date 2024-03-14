#include <stdio.h>

void read(int a[100][100], int r, int c);
void display(int a[100][100], int r, int c);
void rmax(int a[100][100], int r, int c);
void cmax(int a[100][100], int r, int c);
void rmin(int a[100][100], int r, int c);
void cmin(int a[100][100], int r, int c);

int main()
{
    int a[100][100], r, c;

    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of the 2D array:\n");
    read(a, r, c);

    printf("The 2D array is:\n");
    display(a, r, c);

    rmax(a, r, c);
    rmin(a, r, c);
    cmax(a, r, c);
    cmin(a, r, c);

    return 0;
}

void read(int a[100][100], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void display(int a[100][100], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}

void rmax(int a[100][100], int r, int c)
{
    int i, j, max;

    for (i = 0; i < r; i++)
    {
        max = a[i][0];

        for (j = 1; j < c; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }

        printf("Maximum of row %d is %d.\n", i+1, max);
    }
}

void rmin(int a[100][100], int r, int c)
{
    int i, j, min;

    for (i = 0; i < r; i++)
    {
        min = a[i][0];

        for (j = 1; j < c; j++)
        {
            if (min > a[i][j])
            {
                min = a[i][j];
            }
        }

        printf("Minimum of row %d is %d.\n", i+1, min);
    }
}

void cmax(int a[100][100], int r, int c)
{
    int i, j, max;

    for (i = 0; i < c; i++)
    {
        max = a[0][i];

        for (j = 1; j < r; j++)
        {
            if (a[j][i] > max)
            {
                max = a[j][i];
            }
        }

        printf("Maximum of column %d is %d.\n", i+1, max);
    }
}

void cmin(int a[100][100], int r, int c)
{
    int i, j, min;

    for (i = 0; i < c; i++)
    {
        min = a[0][i];

        for (j = 1; j < r; j++)
        {
            if (a[j][i] < min)
            {
                min = a[j][i];
            }
        }

        printf("Minimum of column %d is %d.\n", i+1, min);
    }
}
