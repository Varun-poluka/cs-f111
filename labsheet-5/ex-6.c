#include <stdio.h>
//first n prime numbers
int main()
{
    int n, num=2,count=0,prime;
    printf("enter the value of n ");
    scanf("%d", &n);

    while(count<n)
    {
        prime = 1;
        for(int i=2;i*i<=num;i++)
        {
            if(num%i==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime==1 )
        {
            printf("%d ",num);
            count++;
        }
        num++;
    }
    printf("\n");
}