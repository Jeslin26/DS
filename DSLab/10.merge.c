#include<stdio.h>
#include<stdlib.h>
int a[20],b[20],c[30];
int i,j,k,n,m;
void merge();

void main()
{
    printf("enter the size of array 1:");
    scanf("%d",&n);
    printf("enter the size of array 2:");
    scanf("%d",&m);
    printf("enter the array 1 elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the array 2 elements");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    merge();
}

void merge()
{
    int i=0;k=0;j=0;

  while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]==b[j])
        {
            c[k]=a[i];
            i++;
            k++;
            j++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }

    while(i<n)
    {
       c[k]=a[i];
       k++;i++;
    }
    while(j<m)
    {
        c[k]=b[j];
        k++;j++;
    }


 printf("the sorted arrray is ");
 for(i=0;i<k;i++)
 {
     printf("%d\t",c[i]);
 }
}


