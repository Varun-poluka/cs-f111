#include <stdio.h>
int number (int);
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    number(n);
}
int number(int n)
{
    int i=n;
    if(i==1)
    {
        return 1;
    }
    else
    {
        printf("%d %d",i, number(i-1));
        return 0;
    }
}
