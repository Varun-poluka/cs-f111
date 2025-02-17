#include <stdio.h>
//euclids algorithm
int main()
{
    int a, m,r0, r1, r2=0;
    printf("what are the two numbers ");
    scanf("%d%d", &a, &m);

    if (m<=a)
    {
       r0= m;
       r1= a;
    }
    else
    {
        r0= a;
        r1= m;
    }
    if(r1==0)
    {
        printf("GCD of %d and %d is %d", a, m, r0);
    }
    r2 = r0 % r1;
    while(r2!=0)
    {
        r0 = r1;
        r1 = r2;
        r2 = r0 % r1;
    }
    printf("GCD of %d and %d is %d\n", a, m, r1);
}