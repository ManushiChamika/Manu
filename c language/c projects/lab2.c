#include <stdio.h>
int main()
{
    int examscore, homeworkscore;
    float score1, score2, overallscore;
    
    printf("Please enter the points earned for the exam:");
    scanf("%d", &examscore);
    
    printf("Please enter the points earned for homework:");
    scanf("%d", &homeworkscore);
    
    score1 = examscore * 50/100.0;
    score2 = homeworkscore * 50/100.0;
    overallscore = (score1 + score2)/2;
    
    printf("overall course score is %.2f", overallscore);
    
    return 0;
}
