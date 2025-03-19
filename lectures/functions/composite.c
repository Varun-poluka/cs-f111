#include <stdio.h>
//finding if a number is composite or not using functions
int composite (int);//declaring the function
int main()
{
    int a;
    scanf("%d", &a);
    if(composite(a))//calling the function 
    {
        printf("it is composite\n");
    }
    else 
    {
        printf("it is not composite\n");
    }
}
int composite (int n)//defining the function
{
    if (n<=2)//numbers below 2 are prime
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)//checking wheather the number is prime or not 
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}