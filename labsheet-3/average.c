#include <stdio.h>

int main()
{
    int total = 69, n = 7;
    float average; 

    average = (float)total/n; //explicit typecasting
    printf("average = %lf\n", average); //result would be 9 if (float) was not included.
}