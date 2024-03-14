#include <stdio.h>

void read(int[], int);
void display(int[], int);
int binary(int[], int, int);

int main()
{
    int a[100], pos;
    int n, tar;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("enter the array\n");
        read(a, n);
        printf("The given array is\n");
        display(a, n);
        printf("\n");
        printf("Enter the target element\n");
        scanf("%d", &tar);
        pos = binary(a, n, tar);
        if (pos == -1)
        {
            printf("The target element is not found in the array\n");
        }
        else
        {
            printf("The target element is at position: %d\n", pos+1);
        }
    }
    return 0;
}

void read(int a[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int a[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int binary(int a[100], int n, int tar)
{
    int high = n - 1, low = 0, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == tar)
        {
            return mid;
        }
        if (a[mid] < tar)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
