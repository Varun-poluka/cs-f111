#include <stdio.h>
//factorial of a given number
int main()
{
    int n, factorial;
    printf("enter the number ");
    scanf("%d", &n);

    for(int i=n;i>0;i--)
    {
        factorial = factorial*i;
    }
    printf("%d\n", factorial);
}