#include <stdio.h>

int main()
{
    int marks;
    printf("enter the marks scored: ");
    scanf("%d", &marks);
//assgining grades as per the given questions
    if(marks>=0 && marks<=10)
    {
        if(marks>=9)
        {
            printf("A\n");
        }
        else if(marks>=7)
        {
            printf("B\n");
        }
        else if(marks>=5)
        {
            printf("C\n");
        }
        else if(marks>=3)
        {
            printf("D\n");
        }
        else 
        {
            printf("F\n");
        }
    }
    else
    {
        printf("invalid marks\n");
    }
}