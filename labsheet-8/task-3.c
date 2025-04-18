#include <stdio.h>

int prime(int n);
int main()
{
    int n;
    printf("enter the integer: ");
    scanf("%d", &n);
    for(int i=1;i<=n/2;i++)//starting from 1 to n/2 
    {
        int j = n-i;//i+j should be n
        if(prime(i)&&prime(j))//calling function to check if they are prime or not
        {
            printf("%d+%d=%d\n", i,j,n);
        }
    }
}
int prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)//checking if number is prime
        {
            return 0;
        }
    }
    return 1;
}