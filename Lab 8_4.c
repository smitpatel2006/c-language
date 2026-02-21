// 4. Define a structure called Players which describes details like p_name, team, score and average. Write a program to read data for N players using array of structure.Calculate the highest score and display the details of the top 3 players based on score.Also arrange all players in alphabetical order of p_name and print the sorted list.

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
    int n, j,highest;
    struct players temp;
    printf("Enter how many players ");
    scanf("%d", &n);
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
            if (s[i].score>s[j].score)
            {
                highest = s[i].score;
            }
        }
    }
    printf("Highest score is: %d\n",highest);

    struct players sorted[n];
    for (int i=0;i<n;i++){
        sorted[i]=s[i];
    };
    
    for (int i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (sorted[i].score < sorted[j].score)
            {
                temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }
    
                              
    int top;
    if (n<3)
    {
        top=n;
    }
    else
    {
        top=3;
    }


    printf("\n %d top player",top);
    for(int i=0;i<n ;i++){
        printf("\nRank%d:\n",i+1);
        printf("\nName:%s\n",sorted[i].p_name);
        printf("\nTeam:%s\n", sorted[i].team);
        printf("\nScore:%d\n", sorted[i].score);
        printf("\navg:%.2f\n", sorted[i].avg);
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