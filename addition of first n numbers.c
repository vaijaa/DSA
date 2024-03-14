#include<stdio.h>
int sum(int);
main()
{
    int n,Sum;
    printf("Enter the value n\n");
    scanf("%d",&n);
    Sum=sum(n);
    printf("SUM=%d",Sum);
}
int sum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
return sum;
}
