#include <stdio.h>

int main()
{
    int arr[6],sum=0;
    for(int i=0;i<6;i++)
    {
        scanf("%d", (arr+i));//arrays and pointers are related &a[i]==a+i
        sum = sum + *(arr+i);//a[i]==*(a+i)
    }
    printf("%d\n", sum);
}