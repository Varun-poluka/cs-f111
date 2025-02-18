#include <stdio.h>

int main()
{
    int num;
    printf("enter the month number: ");
    scanf("%d", &num);
    //find the number of days in a month using its month number
    if(num>=1 || num<=12)
    {
        if(num==2)
        {
            printf("number of days in the month is 28\n ");
        }
        else if(num==4 || num==6 || num==9 || num==11)
        {
            printf("number of days in the month is 30\n");
        }
        else if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 ||num==12)
        {
            printf("number of day in the month is 31\n");
        }
    }
    else 
    {
        printf("error entered month number doesnt exist\n");
    }
    return 0;
}