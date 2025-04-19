#include <stdio.h>

void swap (int *a, int *b);
int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    swap(&a,&b);//passing by reference by sending the address of the variables to the function
    printf("%d %d\n", a,b);
}
void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}