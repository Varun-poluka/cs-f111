#include <stdio.h>
//average of user given numbers
int main()
{
    int n,  j;
    int sum =0;
    printf("what is the value of n ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        printf("enter the number ");
        scanf("%d", &j);
        sum = sum+j;
    }
    float average = (float)sum/n;
    printf("average is %f\n", average);
}    