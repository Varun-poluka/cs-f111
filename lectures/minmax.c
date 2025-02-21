#include <stdio.h>
//extrema of two numbers
int main()
{
    int a, b, max, min;

    printf("enter the two numbers ");
    scanf("%d%d", &a, &b);

    if(a>b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    printf("max = %d and min = %d\n", max, min);
}