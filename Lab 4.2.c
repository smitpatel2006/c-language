//2. Swap two numbers using call by value. 
#include<stdio.h>
int swape(int,int);
void main()
{
    int a,b,s;
    printf("Enter a two number:");
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d and b=%d",a,b);
    s=swape(a,b);
    printf("\nAfter swap a=%d and b=%d",a,b);

}
int swape(int a,int b)
{
    int temp,s;
    temp=a;
    a=b;
    b=temp;
    return s;
}