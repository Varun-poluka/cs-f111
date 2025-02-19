#include <stdio.h>

int main()
{
    int n=1000,sum=0;
    int a, b;
    for(int i=1; i<n; i++)
    {
        a = i%3;
        b = i%5;
        if (a==0)
        {
            sum = sum+i;
        }
        else if(b==0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum+0;
        }
        
    }
    printf("%d\n", sum);
    
}