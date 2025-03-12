#include <stdio.h>

int main()
{
    int n,array_a[100],array_b[100];
    printf("number of numbers ");
    scanf("%d", &n);

    for (int i=0;i<n;i++)
    {
        scanf("%d", &array_a[i]);//storing the numbers in form of a array
    }
        int j=0;
        int k=n-1;
    for(int i=0;i<n;i++)
    {
        if(array_a[i]%2==0)//checking if the number in the index is even or odd
        {
            array_b[j]=array_a[i];//if even assign the place from left to right
            j++;
        }
        else
        {
            array_b[k]=array_a[i];//if odd assign place from right to left 
            k--;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", array_b[i]);
    }
    printf("\n");
}