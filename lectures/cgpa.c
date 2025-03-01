#include <stdio.h>
#define max_sub 7
//calculating cgpa using arrays
int main()
{
    int grade[max_sub], credits[max_sub], total_credits=0;
    float cgpa;

    for(int i=0;i<max_sub;i++)
    {
        printf("enter the credits and the secured grade ");
        scanf("%d %d",&credits[i], &grade[i]);//taking input of grades and credits
    }
    int sum=0;
    for(int i=0;i<max_sub;i++)
    {
        sum = sum + credits[i]*grade[i];//finding sum of  total grade points
    }
    for(int i=0;i<max_sub;i++)
    {
        total_credits = total_credits+credits[i]; // sum of all credits
    }
    cgpa = (float)sum/total_credits; //calculating cgpa
    printf("%f\n", cgpa);
}
