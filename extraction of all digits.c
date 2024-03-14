#include<stdio.h>
void ext_digits(int);
main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    ext_digits(n);
}
void ext_digits(int n)
{
    int ld;
    while(n!=0)
    {
        ld=n%10;
        printf("\n%d",ld);
        n=n/10;
    }
}
