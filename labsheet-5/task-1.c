#include <stdio.h>

int main()
{
    int n;
    float pi=0;

    printf("number of terms ");
    scanf("%d", &n);

    for (int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            pi+=((4)/(float)(2*i+1));
        }
        else
        {
            pi-=((4)/(float)(2*i+1));
        }
    }
    printf("%f\n", pi);
}