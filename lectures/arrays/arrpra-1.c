#include <stdio.h>

int main()
{
    int n,x,array[100];
    printf("enter the numbers and the sum ");
    scanf("%d %d ", &n, &x);

    for(int i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if(array[i]+array[j]==x)
            {
                printf("(%d,%d)", array[i], array[j]);
            }
        }
    }
    printf("\n");
}