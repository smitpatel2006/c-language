// 1. Create structure student with name, percentage and age. Read data of 5 students using array of structure.
#include<stdio.h>
struct student
{
    char name[30];
    float per;
    int age;

};
void main ()
{
    struct student s[5];
    printf("Enter a name,percentage and age");
    for (int i = 0; i < 5; i++)
    {
        printf("Name:\n");
        scanf("%s", s[i].name);
        printf("percentage:\n");
        scanf("%f", &s[i].per);
        printf("Age:\n");
        scanf("%d", &s[i].age);

    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nName is:%s", s[i].name);
        printf("\nPercentage is:%f", s[i].per);
        printf("\nAge is:%d", s[i].age);
    }
    
}