#include <stdio.h>

int main()
{
    int i,j,k;

    for (i=1; i<=20; i++)
    {
        for(j=2; j<=5; j++)
        {
            k = j*i;
            printf("%d * %d = %d\t", j, i, k);
        }
        printf("\n");
    }
}