//2. Pass an array in a function to print the array elements. 
#include<stdio.h>
void arr(int a[]);
void main()
{
    int a[5],i,s;
    printf("Enter a 5 elemants:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    arr(a);
}
void arr(int a[])
{
    
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}


