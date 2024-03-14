#include<stdio.h>
void read(int a[100][100], int r, int c);
void display(int a[100][100], int r, int c);
void sums(int a[100][100], int r, int c);
int main()
{
    int a[100][100], r, c;
    printf("Enter values of rows and columns\n");
    scanf("%d%d", &r, &c);
    if(r!=c)
    {
        printf("INVALID\n");
    }
    else
    {  printf("Enter values of elements of 2D array\n");
       read(a, r, c);
       printf("2D array is:\n");
       display(a, r, c);
       sums(a,r,c);
    }
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
void sums(int a[100][100], int r, int c)
{ int i,j,pdsum=0,usum=0,lsum=0;
  for(i=0;i<r;i++)
   { for(j=0;j<c;j++)
      { if(i==j)
          pdsum=pdsum+a[i][j];
        else if(i<j)
          usum=usum+a[i][j];
        else
          lsum=lsum+a[i][j];
       }
    }
     printf("sum of principle diagonal elements=%d \n",pdsum);
     printf("sum of upper triangular elements=%d \n",usum);
     printf("sum of lower triangular elements=%d \n",lsum);
}

