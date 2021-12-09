#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();

struct node
{
    int data;
    struct node*next;
}*top,*temp,*new;

int ch,val;

void main()
{
    printf("1 for push\n2 for pop\n3 for peek\n4 for display\n");
    do{
         printf("\nenter the choice");
         scanf("%d",&ch);
         switch(ch)
         {     
         case 1:push();
         break;
         case 2:pop();
         break;
         case 3:peek();
         break;
         case 4:display();
         break;
         default:
         printf("invalid input");
        }
    }while(ch!=5);
}

void push()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to be inserted");
    scanf("%d",&val);
    if (top==NULL)
    {
        new->data=val;
        new->next=NULL;
        top=new;
    }
    else
    {
        new->data=val;
        new->next=top;
        top=new;
    }
}


void pop(){
    if(top==NULL)
    {
        printf("empty linked stack");

    }
    else
    {
        temp=top;
        val=top->data;
        printf("element is deleted",val);
        top=top->next;
        free(temp);
    }
}

void display()
{
    if(top==NULL)
    {

        printf("empty linked stack");
    }
    else
    {
       temp=top;
       while(temp!=NULL)
       {
          printf("%d \t",temp->data);
          temp=temp->next;
       }
    }
  
}
void peek()
{
    temp=top;
    
    printf("top element is%d",temp->data);
}
