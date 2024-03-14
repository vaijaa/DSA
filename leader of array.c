#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void read(int[],int);
void display(int[],int);
void leader(int[],int);
main()
{ int a[100],n;
  printf("Enter value of n\n");
  scanf("%d",&n);
   if(n<0)
    { printf("Invalid input\n");
    }
 else
   { printf("Enter the numbers\n");
     read(a,n);
     printf("The given array is:\n");
     display(a,n);
     printf("\nThe leaders are:\n");
     leader(a,n);
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
void leader(int a[100],int n)
 { int i,j,flag=1;
   for(i=0;i<n;i++)
     { flag=1;
       for(j=i+1;j<n;j++)
        { if(a[i]<a[j])
           { flag=0;
             break;
           }
        }
       if(flag!=0)
        printf("%d\t",a[i]);
    }
 }

