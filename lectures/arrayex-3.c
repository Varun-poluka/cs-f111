#include <stdio.h>
//printf all employee whole salary is greater than average salary 
int main()
{
    int salary[100], n, sum;
    float average;
    printf("number of emplyees ");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        scanf("%d", &salary[i]);//store each employee salary in a array
    }
    for(int i=0;i<n;i++)
    {
        sum = sum+salary[i];//add salary of all employees
    }
    average = (float)sum/n;//compute average

    for(int i=0;i<n;i++)
    {
        if(salary[i]>average)//checking if average is less then the salary of any employee
        {
            printf("employee %d\n", i+1);
        }
    }
}