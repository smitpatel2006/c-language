// 2. Define a union called Players which describes details like p_name, team, score, average. Write a program to read data for 3 players and print that data.

#include <stdio.h>
union players
{
    char p_name[30];
    float average;
    int score;
    char team[30];
};
void main()
{
    int n;
    union players s[n];

    printf("Enter a size of arry");
    scanf("%d", &s[n]);

    for (int i = 0; i < n; i++)
    {
        printf("Name:\n");
        scanf("%s", s[i].p_name);
        printf("Average:\n");
        scanf("%f", &s[i].average);
        printf("Score:\n");
        scanf("%d", &s[i].score);
        printf("Team:\n");
        scanf("%d", &s[i].team);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nName is:%s", s[i].p_name);
        printf("\nAverage is:%f", s[i].average);
        printf("\nScore is:%d", s[i].score);
        printf("\nTeam is:%d", s[i].team);
    }
}