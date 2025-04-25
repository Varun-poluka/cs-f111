#include <stdio.h>
struct point 
{
    int x;
    int y;
};
void print(struct point *p);
int main()
{
    struct point p1 = {3,4};
    struct point p2 = {23,45};
    print(&p1);//passing the address of the structure variable to the function
    print(&p2);
}
void print(struct point *p)
{
    printf("%d %d ", p->x,p->y);//using the arrow operator to directly change the structure in its address
    printf("\n");
}