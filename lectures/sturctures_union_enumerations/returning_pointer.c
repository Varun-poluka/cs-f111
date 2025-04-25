#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x;
    int y;
};
void print(struct point *ptr);
struct point* fun(int a, int b);
int main()
{
    struct point *ptr1,*ptr2;
    ptr1 = fun(2,3);
    ptr2 = fun(4,5);
    print(ptr1);
    print(ptr2);
    free(ptr1);
    free(ptr2); 
}
void print(struct point *ptr)
{
    printf("%d %d ", ptr->x,ptr->y);
    printf("\n");
}
struct point* fun(int a, int b)
{
    struct point *ptr = (struct point*)malloc(sizeof(struct point));//allocting memory of size of struct variable in heap 
    ptr->x=a;
    ptr->y=b+5;
    return ptr;//heap memory is not changed after functions execution.
}    