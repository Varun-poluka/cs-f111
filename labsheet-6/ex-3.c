#include <stdio.h>
//sum of even fibonocci series numbers with maximum value of 4000000
int main()
{
    int  a=0, b=1, sum=0, c=0;

    while (c<4000000) 
    {
        c = a+b;
        if(c%2==0)
        {
            sum = sum+c;
        }
        b = a;
        a = c;
    }
    printf("%d\n", sum);
}