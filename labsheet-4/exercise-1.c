#include <stdio.h>

int main()
{
    int year;
    printf("enter the year: ");
    scanf("%d", &year);
    if(year<2001 || year>2100)
    {
        printf("error entered year does not belong to 21st century.\n");
    }
    else 
    {
        if(year%4==0)
        {
            printf("it is a leap year\n");
        }
        else if(year%100==0 && year%400==0)
        {
            printf("it is a leap year\n");
        }
        else
        {
            printf("it is not a leap year\n");
        }
    }
}