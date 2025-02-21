#include <stdio.h>
//pattern
int main()
{
    int n;
    int i;
    printf("enter the number of rows ");
    scanf("%d", &n);

    for(int j=1; j<=n; j++)
    {
        for(int k=1; k<=j; k++)
        {
            printf("%d ", i);
            i++;
        }
        printf("\n");
    }
}