//3. Find the power of any number using recursion.
#include<stdio.h>
#include<math.h>
int num(int,int);
void main()
{
    int n,ans=0,x;
    printf("Enter a number for base:");
    scanf("%d",&n);
    printf("Enter a number for power:");
    scanf("%d",&x);
    ans = num(n,x);
    printf("\nAns=%d",ans);
}

int num(int n,int x)
{
    int f;

    if(x==0)
    {
        return 1;
    }
    else
    {
        f=pow(n,x);
        //f = n*pow(n*(x-1));
        return f;

    }
}
