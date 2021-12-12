#include <stdio.h>
#include<stdlib.h>
void create();
void display();
void count();
void search();

struct node
{
    int data;
    struct node*next;
}*new,*temp,*head,*ptr;

int ch,val,c;
void main()
{
    
    printf("\n1.creation\n2.dispaly\n3.count\n4.search");
     do{
         printf("\nenter the choice");
         scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:count();
            break;
            case 4:search();
            break;
            
            
            default:printf("invalid input");
        }
     }while(ch!=5);
}

void create()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&val);
    new->data=val;
    new->next=NULL;
    if(head==NULL)
    {
      head=temp=new;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=new;
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d \t",temp->data);
        temp=temp->next;
    }
}
void count()
{
    c=0;
    temp=head;
    while(temp!=NULL)
    {
     c++;
     temp=temp->next;
    }
   printf("the count is %d",c);
}

void search()
{
    int item,val=1,flag=0;
    ptr=head;
  printf("enter the data to be searched");
  scanf("%d",&item);
  while(ptr->next!=NULL)
    {
     ptr=ptr->next;
     val++;
      if(ptr->data==item)
      {
          printf("%d found at position %d",item,val);
          flag=flag+1; 
          break;
      }
    }
     if(flag==0)
       {
       printf("element not found");
       }
}


