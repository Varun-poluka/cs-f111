#include <stdio.h>
//finding max of two numbers using function
int max(int,int);//declaring the function 
int main()
{
    int x,y;
    scanf("%d%d",&x, &y);
    printf("%d\n", max(x,y));//calling the function 
}
int max(int a, int b)//defining the function
{
    return (a>=b)? a:b;//returning the maximum value 
}