#include <stdio.h>
struct point 
{
    int x;
    int y;
};
void print(struct point p);
int main()
{
    struct point p1 = {3,4};
    struct point p2 = {23,45};
    print(p1);//passing the whole structure variable to the function
    print(p2);
}
void print(struct point p)
{
    printf("%d %d ", p.x,p.y);//member of the structures reamain same 
    printf("\n");
}