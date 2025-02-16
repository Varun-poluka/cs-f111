#include <stdio.h>

int main()
{
    int i=7, result;
    float f = 5.5;
    char c = 'w';

    result = (i>=6) && (c == 'w'); //returns 1
    printf("result = %d ", result);

    result = (i>=6) || (c== 119);  //returns 1 
    printf("result= %d ", result);

    result = (f <11) && (i>100);  //returns 0
    printf("result= %d ", result);

    result = ( c!='P') ||((i+f) <=10); // returns 1
    printf("result= %d\n", result);
}