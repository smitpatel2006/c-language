// 3. Define a structure called Players which describes details like p_name, team, score, average. Write a program to read data for N players and arrange p_name in alphabetical order.

#include <stdio.h>
#include <string.h>
struct players
{
    char p_name[30];
    float avg;
    char team[30];
    int score;
};

int main()
{
    struct players s[50];
    int n, j;
    printf("Enter how many players ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Player Name:\n");
        scanf("%s", s[i].p_name);
        printf("Average:\n");
        scanf("%f", &s[i].avg);
        printf("score:\n");
        scanf("%d", &s[i].score);
        printf("Team Name :\n");
        scanf("%s", s[i].team);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].p_name, s[j].p_name) > 0)
            {
                struct players temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Student Details in alphabetical order:");

    for (int i = 0; i < n; i++)
    {
        printf("\nName is:%s", s[i].p_name);
        printf("\nPercentage is:%f", s[i].avg);
        printf("\nAge is:%d", s[i].score);
        printf("\nTeam Name is:%s", s[i].team);
      
    }
    return 0;
}