#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float s, area;

    printf("what are the lenghts of three sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    s = (a+b+c)/2;

    if(a+b>c)
    {
        if(b+c>a)
        {
            if(a+c>b)
            {
                area = sqrt(s*(s-a)*(s-b)*(s-c));

                printf("area of the triangle is %f\n", area);
            }
        }
    }
}