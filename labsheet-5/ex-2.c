#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("enter the number ");
    scanf("%d", &n);

    for(int i=n; i>0; i=i/10)
    {
        int a = i%10;
        sum = sum+a;
    }
    printf("%d\n", sum);
}    