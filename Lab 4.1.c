//1. Return the maximum of three floating-point numbers.
#include<stdio.h>
void maximum(float,float,float);

void main()
{
    float a,b,c;
    printf("Enter a three number");
    scanf("%f %f %f",&a,&b,&c);
    maximum(a,b,c);

}
void maximum(float a,float b,float c)
{
    if (a>b && a>c)
    {
        printf("%f is max",a);
    }
    else if (b>a && b>c)
    {
        printf("\n%f is max",b);
    }
    else
    {
        printf("\n%f is max",c);
    }

}

