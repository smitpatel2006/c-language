//5. Add two distances in feet and inches using structure. 
#include<stdio.h>
struct lenth {
    int feet;
    int inch;

};

void main()
{
    struct lenth d1,d2,d3;
    printf("Enter a d1 lenth:");
    scanf("%d %d",&d1.feet,&d1.inch);
    printf("Enter a d2 lenth:");
    scanf("%d %d", &d2.feet, &d2.inch);
    d3.feet=d1.feet+d2.feet;
    d3.inch=d1.inch+d2.inch;
    if(d3.inch>12)
    {
        d3.feet=d3.feet+d3.inch/12;
        d3.inch=d3.inch%12;
    }
    printf("lenth in feet:%d and inch:%d",d3.feet,d3.inch);
    }