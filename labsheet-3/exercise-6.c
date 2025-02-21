#include <stdio.h>

int main()
{
    int a,b,c,val;
    printf("what are the three numbers ");
    scanf("%d%d%d", &a, &b, &c);

    if(a!=0 && b!=0 && c!=0 && a!=b && a!=c && b!=c)
    {
        if((a+b+c)==0)
        {
            val = (((a-b)/(c))+((b-c)/(a))+((c-a)/(b)))*(((c)/(b-a))+((a)/(b-c))+((b)/(c-a)));
        }
        else
        {
            printf("the sum of three numbers is not 0\n");
        }
    }
    printf("%d", val);
}