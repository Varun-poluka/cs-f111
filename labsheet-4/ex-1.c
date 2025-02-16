#include <stdio.h>
//find wheather the number is even or odd
int main ()
{
    int a;

    printf("what is the number: ");
    scanf("%d", &a);

    if(a%2==0) //even numbers give remider 0
    {
        printf("it is an even number\n");
    }
    else //odd numbers give reminder 1
    {
        printf("it is an odd number\n");
    }
    return 0;

}