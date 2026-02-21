//5. Find the reverse of any number using recursion.
#include<stdio.h>
int rev(int);
void main()
{
    int n,ans=0;
    printf("Enter a numer:");
    scanf("%d",&n);
    ans=rev(n);
  printf("After reversing number:%d",ans);
}
int rev(int n)
{
    int s=0,r;
    if(n==1)
    {
        return 1;
    }
    
    else
    {
        while (n!=0)
        {
             r=n%10;
        s=s*10+r;
        n=n/10;
        return s;
        }
        
       
    }
    //printf("After reversing number:%d",s);
    
} 
