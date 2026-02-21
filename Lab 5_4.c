//4. Swap elements of two integer arrays using user user-defined function.
#include<stdio.h>
void arr(int a[],int b[]);
void main()
{
    int a[2],b[2];
    
    printf("Enter a element:");
    for(int i=0;i<a[2];i++)
    {
        scanf("%d",&a[i]);
    }
   
    printf("Enter a element:");
    for(int i=0;i<a[2];i++)
    {
        scanf("%d",&b[i]);
    }
    arr(a,b);
}

void arr(int a[],int b[])
{
   
    for(int i=0;i<2;i++)
    {
        int tem;
        a[i]=tem;
        tem=b[i];
        b[i]=tem;
    }
     for(int i=0;i<a[2];i++)
    {
        printf("%d",b[2]);
    }
     for(int i=0;i<a[2];i++)
    {
        scanf("%d",b[2]);
    }

   /*for (int i=0;i<n1;i++)
   {
    a[i]=b[i];

   }
   printf("%d",a[n1]);
   */
}