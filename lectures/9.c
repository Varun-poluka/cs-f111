#include <stdio.h>
//pattern
int main()
{
    int n;
    printf("enter the number of rows ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i=n; i>1; i--)
    {
        for(int j=1; j<=n-i+1; j++)
        {
            printf(" ");
        }
        for (int j=1; j<=2*i-3; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}