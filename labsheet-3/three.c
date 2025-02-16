#include <stdio.h>

int main()
{
    int a, b, c, min;
    printf("enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    min = (a<b ? (a<c ? a : c) : (b<c ? b : c)); //'?'- if first is true it will execute the second 
    printf("min = %d\n", min); // if first is false it will execute the third. ':'- used to seperate expressions.
}