#include <stdio.h>
// minimum of three numbers
int main()
{
    int a, b, c, min;
    printf("enter the three numbers ");
    scanf("%d%d%d", &a, &b, &c);

    if(a<b)
    {
        if(a<c)
        {
            min = a;
        }
        
        else
        {
            min = c;
        }
    }    
        else
        {
            if(b<c)
            {
                min = b;
            }
            else
            {
                min = c;
            }
        }
    
    printf("minimum = %d\n", min);
}