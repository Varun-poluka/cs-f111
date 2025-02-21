#include <stdio.h>
//number is palindrome or not 
int main()
{
    int n, b=0, c;
    printf("enter the number ");
    scanf("%d", &n);
    c = n;

    for(int i=n; i>0; i=i/10)
    {
        int a = i%10;
        b = (b*10)+a;
    }
    if(b==c)
    {
        printf("it is an palindrome\n");
    }
    else
    {
        printf("it is not a palindrome\n");
    }
}