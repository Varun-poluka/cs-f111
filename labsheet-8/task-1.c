#include <stdio.h>
//checking if three points are co-linear or not 
int colinear(int x1, int y1, int x2, int y2, int x3, int y3);//declaring the function
int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("what are the co-ordinates of (x1,y1) (x2,y2) (x3,y3) ");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    if(colinear(x1,y1,x2,y2,x3,y3))//calling the function
    {
        printf("three points are not co-linear\n");
    }
    else
    {
        printf("three points are co-linear\n");
    }
}
int colinear(int x1, int y1, int x2, int y2, int x3, int y3)
{
   int area;
   area = (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
   return area;
}