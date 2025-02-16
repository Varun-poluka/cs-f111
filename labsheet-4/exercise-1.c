#include <stdio.h>
//finding a year is leap year or not 
int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    if(year<2001 || year>2100) //conditions given in the quesrion
    {
        printf("error entered year does not belong to 21st century.\n");
    }
    else 
    {
        if(year%4==0) //leap years are divisible by 4
        {
            printf("it is a leap year\n");
        }
        else if(year%100==0 && year%400==0) // condition for leap year given in the question
        {
            printf("it is a leap year\n");
        }
        else
        {
            printf("it is not a leap year\n");
        }
    }
}