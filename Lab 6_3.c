// 3. Demonstrate the difference between structure and union.
#include <stdio.h>
struct employee
{
    int empid;
    char name[20];
    int salary;
};
union employee1
{
    int empid;
    char name[20];
    int salary;
};

void main()
{
    struct employee e1, e2;
    printf("Enter a 1st emp. name , empid and salary\n");
    scanf("%s %d %d", e1.name, &e1.empid, &e1.salary);
    printf("Enter a 2nd emp. name , empid and salary\n");
    scanf("%s %d %d", e2.name, &e2.empid, &e2.salary);
    printf("1st emp. name:%s, empid:%d and salary:%d\n", e1.name, e1.empid, e1.salary);
    printf("2nd emp. name:%s , empid:%d and salary:%d\n", e2.name, e2.empid, e2.salary);

//-------------

    union employee1 e11, e22;
    printf("Enter a 1st emp. name , empid and salary\n");
    scanf("%s %d %d", e11.name, &e11.empid, &e11.salary);
    printf("Enter a 2nd emp. name , empid and salary\n");
    scanf("%s %d %d", e22.name, &e22.empid, &e22.salary);
    printf("1st emp. name:%s, empid:%d and salary:%d\n", e11.name, e11.empid, e11.salary);
    printf("2nd emp. name:%s , empid:%d and salary:%d\n", e22.name, e22.empid, e22.salary);
}
