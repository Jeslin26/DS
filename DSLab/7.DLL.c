#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertend();
void insertsp();
void delbeg();
void delend();
void delsp();
struct node
{
    struct node*prev;
    int data;
    struct node*next;
}*new,*tail,*head,*temp;
int val,ch,pos;

void main()
{
    printf("1.creation\n2.display\n3.insert at beginning\n4.insert at end\n5.insert at specific\n6.delete at beginning\n7.delete at end\n8.del at specific ");
    do{
     printf("\nenter your choice");
     scanf("%d",&ch);
     switch(ch)
     {
         case 1:create();
         break;
         case 2:display();
         break;
         case 3:insertbeg();
         break;
         case 4:insertend();
         break;
         case 5:insertsp();
         break;
         case 6:delbeg();
         break;
         case 7:delend();
         break;
         case 8:delsp();
         break;
         default:
         printf("invalid input");

     }

    }while(ch!=9);
    
}

void create()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&val);
    new->data=val;
    new->next=NULL;
    new->prev=NULL;
    if(head==NULL)
    {
       head=tail=new;
    }
    else
    {
        tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;

    }
    tail->next=new;
    new->prev=tail;
    tail=new;
   }
}
void display()
{
    if(head==NULL)
    {
        printf("empty linked list");
    }
    else
    {
        tail=head;
        while(tail!=NULL)
        {
           printf("%d\t",tail->data);
           tail=tail->next;
        }

    }
}
void insertbeg()
{
 new=(struct node*)malloc(sizeof(struct node));
 printf("enter the data");
    scanf("%d",&val);
 new->next=head;
 new->prev=NULL;
 new->data=val;
 head=new;
}
void insertend()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&val);
    new->data=val;
    new->next=NULL;
    tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;

    }
    tail->next=new;
    new->prev=tail;
    tail=new;
}
void insertsp()
{
    int i,pos;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&val);
    printf("enter position");
    scanf("%d",&pos);
    new->data=val;
    temp=head;
    for(i=0;i<pos-1;i++)
     {
         temp=temp->next;
     }
     new->next=temp->next;
     temp->next=new;
     new->prev=temp;
}
void delbeg()
{
    temp=head;
    temp=temp->next;
    temp->prev=NULL;
    head=temp;
}
void delend()
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
}
void delsp()
{
    int i,pos;
    printf("enter the position");
    scanf("%d",&pos);
    temp=head;
    for(i=0;i<pos-1;i++)
     {
         temp=temp->next;
     }
     temp->next=temp->next->next;
}