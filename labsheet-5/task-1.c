#include <stdio.h>

int main()
{
    float n;
    double pi=0;

    printf("number of terms ");
    scanf("%f", &n);

    for (int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            pi = pi-(4/(2*i-1));
        }
        else
        {
            pi = pi+(4/(2*i-1));
        }
    }
    printf("%lf\n", pi);
}