#include<stdio.h>
#define N 50
int stack[50],i,ch,item,n;
int top=-1;
void push();
void pop();
void ttop();
void display();

void main()
{
    printf("\n1 for push\n2 for pop\n3 for top\n4 for display\n");
    do{
        printf("\nenter the choice");
        scanf("%d",&ch);
         switch(ch)
         {     
         case 1:push();
         break;
         case 2:pop();
         break;
         case 3:ttop();
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
   top++;
   scanf("%d",&stack[top]);
   printf("element inserted");

}
void pop()
{
    item=stack[top];
    top--;
    printf("element deleted");

}
void ttop()
{
    item=stack[top];
    printf("top element is%d ",item);

}
void display(){
    if(top==-1)
    {
        printf("empty stack");

    }
    else
    {
        for(i=top;i>=0;i--)
         {
        printf("%d \t",stack[i]);
        }

    }
    
}
    
    
