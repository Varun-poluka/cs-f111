#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    int a[n*n];
    for(int i=0;i<=((n*n)-1);i++)
    {
        a[i]=i;
    }
}
