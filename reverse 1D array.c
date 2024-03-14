#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void read(int[],int);
void display(int[],int);
void rev(int[],int);
main()
{ int a[100],n;
  printf("Enter value of n\n");
  scanf("%d",&n);
   if(n<0)
    { printf("Invalid input\n");
    }
 else
   {
    printf("Enter the numbers\n");
    read(a,n);
    printf("The original array is:\n");
    display(a,n);
    rev(a,n);
    printf("\nThe reversed array is:\n");
    display(a,n);
}
}
void read (int a[100],int n)
{ int i;
     for(i=0;i<n;i++)
       { scanf("%d",&a[i]);
       }
}
void display(int a[100],int n)
{ int i;
     for(i=0;i<n;i++)
       { printf("%d ",a[i]);
       }
}
 void rev(int a[100],int n)
 { int i,j,t;
   for(i=0,j=n-1;i<j;i++,j--)
    { t=a[i];
      a[i]=a[j];
      a[j]=t;
    }
 }













