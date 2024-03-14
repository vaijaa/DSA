#include<stdio.h>

void read(int a[100][100], int r, int c);
void display(int a[100][100], int r, int c);
void transpose(int a[100][100], int r, int c);

int main()
{
    int a[100][100], r, c;
    printf("Enter values of rows and columns\n");
    scanf("%d%d", &r, &c);

        printf("Enter values of elements of 2D array\n");
        read(a, r, c);
        printf("2D array is:\n");
        display(a, r, c);
        transpose(a,r,c);
        printf("transpose of given 2D array is:\n");
        display(a, c, r);

    return 0;
}

void read(int a[100][100], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
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
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[100][100], int r, int c)
{
    int i, j, temp;
    for(i = 0; i < c; i++)
    {
        for(j = i + 1; j < r; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}
