// 4. Demonstrate nested structure.
#include<stdio.h>
struct student
{
   char name[20];
    struct s_det
    {
        int id;
    }s1;
};
void main ()
{
    struct student s;
    printf("Enter a student name:\n");
    scanf("%s",s.name);
    printf("Enter a student id:\n");
    scanf("%d",&s.s1.id);
    printf("Enter a student name:%s and id:%d\n",s.name,s.s1.id);
}
