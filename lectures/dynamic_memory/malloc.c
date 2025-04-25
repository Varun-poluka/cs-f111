#include <stdio.h>
#include <stdlib.h>
//making an array without using a array
int main()
{
    int n;
    printf("enter the value of n: ");//askig user for the size of the array
    scanf("%d", &n);
    int *ptr = (int*)malloc(n*sizeof(n));/*using malloc to allocate n block of memory succesively and returns a void ptr
    to the first block*/
    if(ptr==NULL)
    {
        printf("memory not avaliable\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        printf("enter the integer: ");
        scanf("%d", ptr+i);//storing each value entered by the user in successive addresses
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", *(ptr+i));//printing each value by dereferecning each address
    }
    printf("\n");
    return 0;
}