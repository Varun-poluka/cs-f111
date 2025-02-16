#include <stdio.h>
#include <math.h>
//area of the triangle using heron's formula 
int main()
{
    int a, b, c;
    float s, area;

    printf("what are the lenghts of three sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    s = (a+b+c)/2; //finding semi-perimeter 

    if(a+b>c)//next three if statements are the nessecaery conditions of a triangle.
    {
        if(b+c>a)
        {
            if(a+c>b)
            {
                area = sqrt(s*(s-a)*(s-b)*(s-c)); //sqrt from the math library 

                printf("area of the triangle is %f\n", area);
            }
        }
    }
}