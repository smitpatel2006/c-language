/*4. Perform the task of reversing a number and return that number, then check given number is a palindrome or not. (B)*/
#include<stdio.h>
void rev(int);
void main()
{
    int n;
    printf("Enter a numer:");
    scanf("%d",&n);
    rev(n);
  
}
void rev(int n)
{
    int s=0,r;
    
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("After reversing number:%d",s);
     if(s==n)
   {
    printf("\nNumber is Palindrome. ");

   }
  else{
   printf("\nNumber is Not Palindrome. ");
    }
} 
