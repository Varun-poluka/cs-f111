#include <stdio.h>
//prime numbers between two numbers.
int main()
{
    int a,b,prime;
    printf("what are the two numbers ");
    scanf("%d%d", &a, &b);

    for(int i=a;i<=b;i++)
    {
        prime = 1;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime==1)
        {
            printf("%d " , i);
        }
    }
    printf("\n");
}