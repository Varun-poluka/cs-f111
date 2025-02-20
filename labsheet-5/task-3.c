#include <stdio.h>

int main()
{
    int sum=0;

    for (int i=1; i<=10; i++)
    {
        sum = sum+i;
    }
    float average = (float)sum/10;    
    printf("average of first 10 natural numbers is %f\n", average);
}