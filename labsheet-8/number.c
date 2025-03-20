#include <stdio.h>
//using recurssive function print number from n to 1  where n is input from user
int number(int n);//declaring a function
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    number(n);//calling the function
    printf("\n");
}
int number(int n)//defining the function
{
    if(n==0)//base case 
    {
        return 1;
    }
    printf("%d ", n);
    number(n-1);//reccursion 
    return 0;
}
