#include <stdio.h>
//average marks of 100 students 
int main()
{
    int marks[100],sum=0;
    float average;
    for(int i=0;i<100;i++)
    {
        scanf("%d",&marks[i]);//take input from input.txt file 
    }
    for(int i=0;i<100;i++)
    {
        sum = sum+marks[i];
    }
    average = (float)sum/100;//explicit typecasting 
    printf("%f\n", average);
    return 0;
}