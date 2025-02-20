#include <stdio.h>
#include <math.h>

int main()
{
   double x, sum=0;
   int n;
   printf("what is the value of n ");
   scanf("%d", &n);
   printf("what is the value of x ");
   scanf("%lf", &x);

   for(int i=1; i<=n; i++)
   {
    if(i%2==1)
    {
        sum = sum + pow(x,i)/sqrt(i);
    }
    else 
    {
        sum = sum - pow(x,i)/sqrt(i);
    }
   }
   printf("%lf\n", sum);
}    



