#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void peek();
void display();

struct node
{
    int data;
    struct node*next;
}*new,*front,*rear,*temp;

int op,val,i;

void main()
 {
     printf("1 for insert\n2 for delete\n3 for peek\n4 for display\n");
    do
    {
        printf("\nenter the option");
        scanf("%d",&op);
        switch(op)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            default:printf("invalid input");
        }
    }while(op!=5);
}
void  insert()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&val);
    new->data=val;
    new->next=NULL;
    if(rear==NULL)
    {
        front=rear=new;
    }
    else
    {
        rear->next=new;
        rear=new;

    }
}
void display()
{
    if(front==NULL)
    {
         printf("linked queue underflow");   
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
          printf("%d\t",temp->data);
          temp=temp->next;
        }
    }
}

void delete()
{
    if(front==NULL)
    {
        printf("linked queue underflow");
    }
    else
    {
        temp=front;
        front=front->next;
        temp->next==NULL;
        printf("data deleted");
      
    }
    
        
}
void peek()
{
    temp=front;
    printf("peek element is :%d",temp->data);
}