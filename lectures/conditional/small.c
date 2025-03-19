#include <stdio.h>
//finding smaller of two number
int main()
{
    int a , b;

    printf("enter the two numbers ");
    scanf("%d%d", &a, &b);

    if(a<b)
    {
        printf("%d is smaller than %d\n", a, b);
    }
    else if(b<a)
    {
        printf("%d is smalled than %d\n", b, a);
    }
    else
    {
        printf("both are equal\n");
    }
}