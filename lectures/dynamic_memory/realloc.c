#include <stdio.h>
#include <stdlib.h>
//increasing the size of the allocates memory using realloc
int main()
{
    int *ptr = (int*)malloc(2*sizeof(int));//allocates two succcessive blocks of memory
    if(ptr==NULL)
    {
        printf("memory not allocated\n");
        return 0;
    }
    for(int i=0;i<2;i++)
    {
        printf("enter the integer: ");
        scanf("%d", (ptr+i));//stores the two values 
    }
    for(int i=0;i<2;i++)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    ptr = (int*)realloc(ptr,4*sizeof(int));/*allocates 4 successive blocks of memory and doesnt loose the already existing 
    data in the two bocks */
    if(ptr == NULL)
    {
        printf("memory not alloted\n");
        return 0;
    }
    for(int i=2;i<4;i++)
    {
        printf("enter the integer: ");
        scanf("%d", (ptr+i));//reading the values in the newly allocated memory
    }
    for (int i=0;i<4;i++)
    {
        printf("%d ", *(ptr+i));//printfs the values in all 4 of blocks of memory
    }
    printf("\n");
    return 0;
}