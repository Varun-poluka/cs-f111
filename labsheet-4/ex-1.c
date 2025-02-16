#include <stdio.h>

int main ()
{
    int a;

    printf("what is the number: ");
    scanf("%d", &a);

    if(a%2==0)
    {
        printf("it is an even number\n");
    }
    else
    {
        printf("it is an odd number\n");
    }
    return 0;

}