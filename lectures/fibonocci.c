#include <stdio.h>

int main()
{
    int n , i, a=0, b=1, c;
    printf("how many terms: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++) //for loop for terminating at n terms 
    {
        printf("%d ", a);// a zero is printed
        c = a+b; //a+b is assigned to c 
        b = a; // b is assigned to a 
        a = c; // a is assignde c which is to be printed 
    }
    printf("\n");
}      