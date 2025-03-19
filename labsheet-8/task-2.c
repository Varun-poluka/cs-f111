#include <stdio.h>
//finding the number of digits in a given number using functions
int digits (int);//declaring the function
int main()
{ 
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    printf("the number of digits is %d\n", digits(n));//calling the function
    return 0;
}
int digits (int n)//defining the function
{
    int i=0;
    while (n>0)
    {
        n=n/10;
        i++;//fincind the number of digits
    }
    return i;
}
