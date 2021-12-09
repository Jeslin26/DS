#include<stdio.h>
#define k 10
int n,a[10],i,ch;
void big()
{
    int large=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        large=a[i];
    }
    printf("biggest element is %d",large);
}
void small()
{
    int b=a[0];
    for(i=0;i<n;i++)
    {
        if(b>a[i])
        b=a[i];
    }
    printf("smallest is %d",b);
}
void sum()
{
    int s=0;
    for(i=0;i<n;i++)
    {
    s=s+a[i];
    }
    printf("sum of array is %d",s);
}
void mean()
{
    int m,s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    m=s/n;
    printf("the mean is%d",m);
}
void rev()
{
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{
    printf("enter the array limit");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("1 for big\n2 for small\n3 for sum\n4 for mean\n5 for reverse");
    do{
    printf("\nenter the choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        big();
        break;
        case 2:
        small();
        break;
        case 3:
        sum();
        break;
        case 4:
        mean();
        break;
        case 5:
        rev();
        break;
        default:
        printf("invalid input");

    }
    }while(ch!=6);

}

