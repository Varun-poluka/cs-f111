#include <stdio.h>

int main()
{
    int a, b, c,  sum; // initialising 
    printf("what are the values of a and b and c ");
    scanf("%d%d%d", &a, &b, &c);// reading and storing values in variables
    sum = a+b+c; //expression 
    printf("%d\n", sum);
    return 0;
}