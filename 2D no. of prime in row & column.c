#include <stdio.h>

void read(int a[100][100], int r, int c);
void display(int a[100][100], int r, int c);
int isPrime(int num);
void rprime(int a[100][100], int r, int c);
void cprime(int a[100][100], int r, int c);

int main()
{
    int a[100][100], r, c;
    printf("Enter values of rows and columns\n");
    scanf("%d%d", &r, &c);
    printf("Enter values of elements of 2D array\n");
    read(a, r, c);
    printf("2D array is:\n");
    display(a, r, c);
    rprime(a, r, c);
    cprime(a, r, c);
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

int isPrime(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void rprime(int a[100][100], int r, int c)
{
    printf("Number of prime numbers in each row are:\n");
    for (int i = 0; i < r; i++)
    {
        int count = 0;
        for (int j = 0; j < c; j++)
        {
            if (isPrime(a[i][j]))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}

void cprime(int a[100][100], int r, int c)
{
    printf("Number of prime numbers in each column are:\n");
    for (int j = 0; j < c; j++)
    {
        int count = 0;
        for (int i = 0; i < r; i++)
        {
            if (isPrime(a[i][j]))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}
