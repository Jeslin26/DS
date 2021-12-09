#include<stdio.h>
#define N 10
int queue[N],front=-1,rear=-1,op,a,i;
void insert();
void del();
void peek();
void display();

void main()
{
    printf("\n1 for insert\n2 for delete\n3 for peek\n4 for display");
    do
    {
        printf("\nenter the option");
        scanf("%d",&op);
        switch(op)
        {
            case 1:insert();
            break;
            case 2:del();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            default:printf("invalid input");
        }
        
    }while(op!=5);
}
 
void insert()
{
    if(rear==N-1)
    {
        printf("Queue overflow");
        
    }
    else
    {
        scanf("%d",&a);
        queue[rear]=a;
        rear++;
    }
    printf("\nelement inserted");
}

void del()
{
    if(rear==-1||front>rear)
    {
        printf("queue underflow");
    }
    else
    {
       a=queue[front];
       printf("%d element deleted",a);
       front++;
    }
}

void peek()
{
    if(rear==-1||front>rear)
    {
      printf("queue underflow");   
    }
    else
    {
       a=queue[front];
       printf("top element is %d",a);
    }
}

void display()
{
    if(rear==-1||front>rear)
    {
         printf("queue underflow");   
    }
    else
    {
        for(i=front;i<rear;i++)
        {
            printf("%d \t",queue[i]);
        }
    }
}