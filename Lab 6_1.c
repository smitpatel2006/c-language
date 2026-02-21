//1. Create, declare and initialise the structure employee. 
#include<stdio.h>
struct employee
{
    int empid;
    char name[20];
    int salary;
    
};

void main ()
{
    struct employee e1,e2;
    printf("Enter a 1st emp. name , empid and salary\n");
    scanf("%s %d %d",e1.name,&e1.empid,&e1.salary);
    printf("Enter a 2nd emp. name , empid and salary\n");
    scanf("%s %d %d",e2.name,&e2.empid,&e2.salary);
    printf("1st emp. name:%s, empid:%d and salary:%d\n", e1.name, e1.empid, e1.salary);
    printf("2nd emp. name:%s , empid:%d and salary:%d\n", e2.name, e2.empid, e2.salary);
}
