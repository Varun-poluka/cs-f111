#include <stdio.h>
//finding maximum of given numbers 
int main()\
{
    int n, numbers[100];
    printf("how many numbers ");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        scanf("%d", &numbers[i]);//storing the numbers in a array
    }
    int max = numbers[0];//assuming max is the first number
    for(int i=0;i<n;i++)
    {
        if(numbers[i]>max)//checking if numbers in the arrray are larger than max one by one
        {
            max = numbers[i];//updating max 
        }
    }
    printf("%d\n", max);
}