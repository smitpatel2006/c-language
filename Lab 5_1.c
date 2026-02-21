//1. Find the factorial of a number using a function and a recursive function.
#include<stdio.h>
int fact(int);
void main()
{
    int n,ans=0;
    printf("Enter a number for factorial:");
    scanf("%d",&n);
    ans = fact(n);
    printf("\nAns=%d",ans);
}
int fact(int n){
    int f;

    if(n==1)
    {
        return 1;
    }
    else
    {
        f = n*fact(n-1);
        return f;

    }
}
