#include <stdio.h>
//finding sum of two numbers using functions
int sum(int , int);//declaring the function
int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    printf("%d\n", sum(a,b));//calling the function
}
int sum(int a, int b)//defining the function
{
    return a+b;//returning the sum of the two numbers
}