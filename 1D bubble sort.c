#include<stdio.h>
void read( int[],int);
void display( int[],int);
void sort(int[],int);
main()
{ int a[100];
  int n;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  if(n<0)
    { printf("Invalid input\n");
    }
  else
   { printf("enter the array\n");
       read(a,n);
       printf("The given array is\n");
       display(a,n);
       printf("\n");
       printf("The given array can be sorted as\n");
       sort(a,n);
       display(a,n);
   }
 }
   void read( int a[100],int n)
   { int i;
     for(i=0;i<n;i++)
       { scanf("%d",&a[i]);
       }
   }
void display( int a[100],int n)
   { int i;
     for(i=0;i<n;i++)
       { printf("%d ",a[i]);
       }
   }
   void sort(int a[100],int n)
 { int i,j,temp;
    for(i=0;i<n;i++)
      { for(j=0;j<n-i-1;j++)
         { if(a[j]>a[j+1])
            { temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
         }
      }
  }
