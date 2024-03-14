#include<stdio.h>
#include<stdlib.h>
struct book
{
    char t[30];
    float cost;
    int y;
    int no_of_a;
    char a[5][30];
    struct book *next;
};
struct book* add_end(struct book*);
struct book* add_beg(struct book*);
struct book* del_end(struct book*);
struct book* del_beg(struct book*);
struct book * add_bk(struct book *,int);
struct book * delete_bk(struct book *,int);
int count(struct book *);
float cost_bk(struct book *);
int author(struct book *,char []);
void year(struct book *,int);
void display(struct book *);
void display_info(struct book *);
struct book * d(struct book *,char []);
main()
{
    struct book *head=NULL;
    int ch,pos,c=0,y;
    float cost;
    char a[30],ti[50];
    while(1)
    {
        printf("Enter 1:To add a book at specified position\nEnter 2: To delete a book at specified position\nEnter 3: To calculate no.of books\nEnter 4: Cost of all books\nEnter 5:Author\nEnter 6:Particular year\nEnter 7: To display particular title book\nEnter 8: To display all books\nEnter 9:To add a book at beginning\nEnter 10:To add a book at end\nEnter 11:To delete a book at beginning\nEnter 12:To add a book at end\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the position\n");
                   scanf("%d",&pos);
                   head=add_bk(head,pos);
                   break;
            case 2:if(head==NULL)
                      printf("List is empty\n");
                   else
                   {
                        printf("Enter the position\n");
                        scanf("%d",&pos);
                        head=delete_bk(head,pos);
                   }
                   break;
           case 3:c=count(head);
                  printf("Number of books=%d\n",c);
                  break;
           case 4: cost=cost_bk(head);
                   printf("Total cost of all books=%f",cost);
                  break;
           case 5:printf("Enter the author name\n");
                  scanf("%s",a);
                  c=author(head,a);
                  printf("Number of books of particular author=%d\n",c);
                  break;
           case 6:printf("Enter the year to be searched\n");
                  scanf("%d",&y);
                  year(head,y);
                  break;
           case 7:printf("Enter the tittle name\n");
                  scanf("%s",ti);
                  head=d(head,ti);
                  break;
           case 8: display(head);
                  break;
           case 9: add_beg(head);
                   break;
           case 10: add_end(head);
                   break;
           case 11:if(head==NULL)
                      printf("List is empty\n");
                   else
                   {
                        head=del_beg(head);
                   }
                   break;
           case 12:if(head==NULL)
                      printf("List is empty\n");
                   else
                   {
                        head=del_end(head);
                   }
                   break;
        }
    }
}
struct book *getnode()
{
    struct book *newnode=(struct book *)malloc(sizeof(struct book));
    int i;
    printf("Enter the title of the book\n");
    scanf("%s",newnode->t);
    printf("Enter the cost of the book\n");
    scanf("%f",&newnode->cost);
    printf("Enter the year of publication of the book\n");
    scanf("%d",&newnode->y);
    printf("Enter the no.of authors of the book\n");
    scanf("%d",&newnode->no_of_a);
    for(i=0;i<newnode->no_of_a;i++)
    {
        scanf("%s",newnode->a[i]);
    }
    newnode->next=NULL;
    return newnode;
}
struct book *add_bk(struct book *head,int pos)
{
   struct book *newnode=getnode();
   struct book *cur=head;
   int i;
   if(pos<=0 || head==NULL)
   {
       newnode->next=head;
       head=newnode;
       return head;
   }
   for(i=0;i<pos-1 && cur->next!=NULL;i++)
   {
       cur=cur->next;
   }
   newnode->next=cur->next;
   cur->next=newnode;
   return head;
}
struct book *delete_bk(struct book *head,int pos)
{
    struct book *cur=head,*pre=NULL;
    int i;
    if(pos<=0 || head->next==NULL)
    {
        head=head->next;
        printf("Deleted book information\n");
        display_info(cur);
        free(cur);
        return head;
    }
    for(i=0;i<pos-1 && cur->next!=NULL;i++)
    {
        pre=cur;
        cur=cur->next;
    }
    pre->next=cur->next;
    display(cur);
    free(cur);
    return head;
}
void display(struct book *head)
{
    struct book *cur=head;
    int j;
    while(cur!=NULL)
    {
        printf("Name=%s\nCost=%f\nYear=%d\nNo.of authors=%d\n",cur->t,cur->cost,cur->y,cur->no_of_a);
        for(j=0;j<cur->no_of_a;j++)
        {
            printf("Author name=%s\n",cur->a[j]);
        }
        cur=cur->next;
    }

}
int count(struct book *head)
{
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
    return c;
}
float cost_bk(struct book *head)
{
    struct book *cur=head;
    float c;
    while(cur!=NULL)
    {
        c=c+cur->cost;
        cur=cur->next;
    }
    return c;
}
void year(struct book *head,int n)
{
    struct book *cur=head;
    while(cur!=NULL)
    {
        if(cur->y==n)
        {
            display_info(cur);
            printf("\n");
        }
        cur=cur->next;
    }
}
struct book * d(struct book *head,char ti[50])
{
   struct book *cur=head,*p=NULL;
   while(cur!=NULL)
   {
       if(strcasecmp(ti,cur->t)==0)
       {
          if(p!=NULL)
          {
              p->next=cur->next;
          }
          else
            head=head->next;
          display_info(cur);
          return head;
       }
       p=cur;
       cur=cur->next;
   }
   return head;
}
int author(struct book *head,char a[])
{
    struct book *cur=head;
    int c=0,i;
    while(cur!=NULL)
    {
        for(i=0;i<cur->no_of_a;i++)
        {
            if(strcasecmp(a,cur->a[i])==0)
            {
                c++;
            }
        }
        cur=cur->next;
    }
    return c;
}
void display_info(struct book *head)
{
    struct book *cur=head;
    int j;
        printf("Name=%s\nCost=%f\nYear=%d\nNo.of authors=%d\n",cur->t,cur->cost,cur->y,cur->no_of_a);
        for(j=0;j<cur->no_of_a;j++)
        {
            printf("Author name=%s\n",cur->a[j]);
        }
        cur=cur->next;
}
struct book* add_end(struct book* head)
{
    struct book* newnode=getnode();
    struct book* cur;
    if (head == NULL)
    {
        head = newnode;
        return head;
    }
    else
    {
        cur = head;
        while (cur->next != NULL)
        {
            cur = cur->next;
        }
        cur->next = newnode;
        return head;
    }
}

struct book *add_beg(struct book *head)
{
    struct book *newnode=getnode();
    newnode->next = head;
    head = newnode;
    return head;
}
struct book *del_end(struct book *head)
{
    struct book *prv = NULL;
    struct book *cur = head;
    while (cur->next != NULL)
    {
        prv = cur;
        cur = cur->next;
    }
    if (prv != NULL)
    {
        prv->next = NULL;
    }
    else
    {
        head = NULL;
    }
    display_info(cur);
    free(cur);
    return head;
}

struct book *del_beg(struct book *head)
{
    struct book *cur = head;
    head = head->next;
    display_info(cur);
    free(cur);
    return head;
}
