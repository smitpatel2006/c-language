//3. Swap two numbers using call by reference. 
#include<stdio.h>
void swape(int*,int*);
void main()
{
    int a,b;
    printf("Enter a two number:");
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d and b=%d",a,b);
    swape(&a,&b);
    printf("\nAfter swap a=%d and b=%d",a,b);

}
void swape(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}