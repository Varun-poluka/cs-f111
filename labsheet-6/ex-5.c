#include <stdio.h>
//sum of cubes of individual numbers in a number adds up to the same number
int main()
{
    int n;
    int sum=0;
    int a;
    int i;
    printf("enter the number ");
    scanf("%d", &n);
    i = n;

    while(i>0)
    {
        a = i%10;
        sum = sum+(a*a*a);
        i = i/10;
    }
    if(sum == n)
    {
        printf("it is an armstrong number\n");
    }
    else
    {
        printf("it is not a armstrong number\n");
    }
}