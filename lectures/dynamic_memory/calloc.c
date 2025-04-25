#include <stdio.h>
#include <stdlib.h>
//same task as the malloc code but using calloc 
int main()
{
    int n;
    printf("enter the  the value of n: ");
    scanf("%d", &n);
    int* ptr = (int*)calloc(n,sizeof(n));//calloc takes two arguments of number of blocks and size of each block to same function as malloc
    if(ptr==NULL)
    {
        printf("memory not allocated\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        printf("enter the integer: ");
        scanf("%d", (ptr+i));
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
}