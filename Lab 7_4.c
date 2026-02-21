//Create a structure student with roll number, name and marks of 3 subjects. Read data of N students using array of structure.Calculate total and percentage for each student. Print the details of the top 3 students based on highest total marks. Also print class average percentage.
#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    float per;
    int age;
};

int main()
{
    struct student s[5];
    int n, j;

    for (int i = 0; i < 5; i++)
    {
        printf("Name:\n");
        scanf("%s", s[i].name);
        printf("Percentage:\n");
        scanf("%f", &s[i].per);
        printf("Age:\n");
        scanf("%d", &s[i].age);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Student Details in alphabetical order:");

    for (int i = 0; i < n; i++)
    {
        printf("\nName is:%s", s[i].name);
        printf("\nPercentage is:%f", s[i].per);
        printf("\nAge is:%d", s[i].age);
    }
    return 0;
}