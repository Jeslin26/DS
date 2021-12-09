#include <stdio.h>
#include<stdlib.h>
void create();
void display();
void insertbeg();
void insertend();
void insertsp();
void delbeg();
void delpos();
void delend();
int ch,val,pos,i,d;

struct node
{
    int data;
    struct node*next;
}*new,*head,*temp,*ptr;

void main()
{
   
    printf("\n1.creation\n2.dispaly\n3.insertion at beginning\n4.insertion at end\n5.insertion at specific\n6.del at beginning\n7.del at pos\n8.del at end");
     do{
         printf("\nenter the choice");
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
            case 7:delpos();
            break;
            case 8:delend();
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
    new->next=0;
    if(head==NULL)
    {
        head=temp=new;
    }
    else
    {
        temp->next=new;
        temp=new;
    }
}
    
    
void display()
{
    temp=head;
     while(temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
    
}
void insertbeg()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&val);
    new->data=val;
    new->next=head;
    head=new;
}
void insertend()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&val);
    new->data=val;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;
    new->next=NULL;
}
void insertsp()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data of the position to be changed");
    scanf("%d",&pos);
    printf("enter the data");
    scanf("%d",&val);
    new->data=val; 
    temp=head;
    while(temp->data!=pos)
    {
        ptr=temp;
        temp=temp->next;
    }
    new->next=temp;
    ptr->next=new;
    temp=head;
}
void delbeg()
{
    temp=head;
    head=temp->next;
    free(temp);
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
}
void delpos()
{
    printf("enter the data of the position to be changed");
    scanf("%d",&d);
    temp=head;
    while(temp->data!=d)
    {
        ptr=temp;
        temp=temp->next;
    }
    if(temp->data==d)
    {
        ptr->next=temp->next;
        free(temp);
        temp=head;
        
    }
}

void delend()
{
    temp=head;
    while(temp->next!=NULL)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=NULL;
    free(temp);
    temp=head;
   
}

       
        