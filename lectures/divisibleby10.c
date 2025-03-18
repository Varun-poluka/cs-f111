#include <stdio.h>
//checking if the number is divisible by 10 or not 
void divisibleby10(int n);//declating the function
int main()
{
    int a;
    scanf("%d", &a);
    divisibleby10(a);//calling thr function and applying it on a
}
void divisibleby10(int n)//defining a functinon using void which returns nothing 
{
    if(n%10==0)
    {
        printf("it is divisible by 10\n");
    }
    else 
    {
        printf("it is not divisible by 10\n");
    }
}