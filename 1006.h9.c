#include <stdio.h>
int main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    
    if(score >= 60)
    {
        int attendance_rate;
        printf("Enter your attendance rate: ");
        scanf("%d", &attendance_rate);
        if(attendance_rate >= 80)
        {
            printf("及格。");
        }
        else
        {
            printf("不及格。");
        }
    }
    else
    {
        printf("不及格。");
    }
    return 0;
}