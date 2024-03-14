#include <stdio.h>
#include <string.h>
struct phone_pay
{
   char trans_id[50];
   char user_id[50];
   float amt;
   char ben_id[50];
};
void read(struct phone_pay *, int);
void display(struct phone_pay *, int);
void usertrans(struct phone_pay *, int , char[]);
void trans(struct phone_pay *, int , char []);
void display_info(struct phone_pay);
main()
{
    struct phone_pay *t;
    int n;
    char ti[50];
    char u[50];
    printf("Enter the number of transactions\n");
    scanf("%d",&n);
    t=(struct phone_pay *)malloc(sizeof(struct phone_pay )*n);
    read(t,n);
    display(t,n);
    printf(" Enter the User ID whose details to be searched\n");
    scanf("%s",u);
    usertrans(t,n,u);
    printf(" Enter the transaction details is to be searched\n");
    scanf("%s",ti);
    trans(t,n,ti);
}
void read(struct phone_pay *t, int n)
{
    int i;
    for(i=0; i<n; i++)
     {
         printf("Enter the Transaction id\n ");
         scanf("%s",t[i].trans_id);
         printf("Enter the User id\n ");
         scanf("%s",t[i].user_id);
         printf("Enter the amount transacted \n ");
         scanf("%f",&t[i].amt);
         printf("Enter the beneficiary id \n ");
         scanf("%s",t[i].ben_id);

     }
}
void display(struct phone_pay *t, int n)
{
    int i;
    for(i=0; i<n; i++)
     {
         printf("\n");
         printf("Transaction id: %s\n",t[i].trans_id);
         printf("User id: %s \n",t[i].user_id);
         printf("amount transacted:%f\n",t[i].amt);
         printf("beneficiary id:%s\n",t[i].ben_id);
     }
}
void trans(struct phone_pay *t, int n, char ti[50])
{
    int i;
    for(i=0; i<n; i++)
    {
        if(strcasecmp(t[i].trans_id,ti)==0)
        {
            display_info(t[i]);
            return;
        }
    }
            printf(" Transaction ID not found\n");

}

void display_info(struct phone_pay t)
{
     printf("\n");
     printf("Transaction id: %s\n", t.trans_id);
     printf("User id: %s\n", t.user_id);
     printf("Amount transacted: %.2f\n", t.amt);
     printf("Beneficiary id: %s\n", t.ben_id);
}
void usertrans(struct phone_pay *t, int n , char u[50])
{
    int i;
     for(i=0;i<n;i++)
    {
        if(strcasecmp(t[i].user_id,u)==0)
        {
            display_info(t[i]);

        }
    }
}
