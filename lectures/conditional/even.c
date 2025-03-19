#include <stdio.h>
//finding if number is even or not
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);

    if(n%2==0)
    {
        printf("it is an even number\n");
    }
    else 
    {
        printf("it is an odd number\n");
    }
}