#include<stdio.h>
struct computer
{
    char brand[20];
    int RAM;
    int ROM;
    float price;
};
void read(struct computer [],int);
void display(struct computer [],int);
void search_brand(struct computer [],int,char[]);
void max_price(struct computer [],int,float);
main()
{
    int n;
    char brand[20];
    struct computer c[50];
    printf("enter the number of computers\n");
    scanf("%d",&n);
    read(c,n);
    display(c,n);
}
void read(struct computer c[50],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter brand\n");
        scanf("%s",c[i].brand);
        printf("enter RAM value\n");
        scanf("%d",&c[i].RAM);
        printf("enter ROM value\n");
        scanf("%d",&c[i].ROM);
        printf("enter price\n");
        scanf("%f",&c[i].price);
    }
}
void display(struct computer c)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("brand:%s\n",c[i].brand);
        printf("RAM:\n",c[i].RAM);
        printf("enter ROM value\n");
        scanf("%d",&c[i].ROM);
        printf("enter price\n");
        scanf("%f",&c[i].price);
    }
}
void search_brand(struct computer c[50],int n,char brand[50])
{
    int i;

}
