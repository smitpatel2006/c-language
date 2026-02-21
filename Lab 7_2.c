//2. Create structure student with name, percentage and age. Read data of N students using array of structure. Print details ofstudent with maximum percentage.
#include <stdio.h>
struct student
{
    char name[30];
    float per;
    int age;
};
void main()
{
    int n;
    struct student s[n];
    
    printf("Enter a size of arry");
    scanf("%d",&s[n]);

    for (int i = 0; i < n; i++)
    {
        printf("Name:\n");
        scanf("%s", s[i].name);
        printf("percentage:\n");
        scanf("%f", &s[i].per);
        printf("Age:\n");
        scanf("%d", &s[i].age);
    }

     
    for (int i = 0; i < n; i++)
    {
        printf("\nName is:%s", s[i].name);
        printf("\nPercentage is:%f", s[i].per);
        printf("\nAge is:%d", s[i].age);
    }
    int max=0;
    for (int i = 0; i < n ; i++)
    {
        
        if (s[i].per>s[max].per)
        {
           max = i;
        }
        

    }
    printf("name:%s",s[max].name);
    printf("name:%d", s[max].age);
    printf("name:%f", s[max].per);
}