#include <stdio.h>
//pattern
int main()
{
    int n;
    printf("number of rows ");
    scanf("%d", &n);

    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}