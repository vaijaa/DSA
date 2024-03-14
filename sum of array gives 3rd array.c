#include<stdio.h>
void read( int[],int);
void display( int[],int);
void sum( int[],int[],int[],int);
main()
{ int a[100],b[100],c[100];
  int n;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  if(n<0)
    { printf("Invalid input\n");
    }
  else
   {  printf("Enter the elements of 1st array\n");
      read(a,n);
      printf("1st array is\n");
      display(a,n);
      printf("\n");
      printf("Enter the elements of 2nd array\n");
      read(b,n);
      printf("2nd array is\n");
      display(b,n);
      printf("\n");
      sum(a,b,c,n);
      printf("3rd array is\n");
      display(c,n);
      printf("\n");
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
void sum( int a[100],int b[100],int c[100],int n)
    { int i;
     for(i=0;i<n;i++)
       { c[i]=a[i]+b[i];
       }
   }
