#include <stdio.h>
#include <stdlib.h>

void read(int[], int);
void display(int[], int);
void rot(int[], int, int);

int main() {
  int a[100], n, p;
  printf("Enter the size of the array: \n");
  scanf("%d", &n);
  if (n < 0) {
    printf("Invalid input\n");
    return 0;
  }
  printf("Enter the elements of the array:\n");
  read(a, n);
  printf("The array is:\n");
  display(a, n);
  printf("Enter the number of positions to rotate: ");
  scanf("%d", &p);
  rot(a, n, p);
  printf("The rotated array is:\n");
  display(a, n);
  return 0;
}

void read(int a[100], int n) {
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
}

void display(int a[100], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

void rot(int a[], int n, int p)
{
    int i, temp;
    for(i = 0; i < p; i++)
    {
        temp = a[0];
        for(int j = 0; j < n-1; j++)
        {
            a[j] = a[j+1];
        }
        a[n-1] = temp;
    }
}
























