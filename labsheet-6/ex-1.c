#include <stdio.h>

int main()
{
    int n=100;
    int sumofsquare=0, squareofsum;
    int sum=0;
    int diff;

    for(int i=1; i<=n; i++)
    {
        sumofsquare = sumofsquare+(i*i);    
    }
    for(int j=1 ; j<=n; j++)
    {
        sum = sum+j;
    }
    squareofsum = (sum*sum);
    diff = (squareofsum)-(sumofsquare);
    printf("%d\n", diff);
}
     