#include <stdio.h>
#include <math.h>

int main()
{
    float num1 , num2, result;
    char op;
    printf("what is num1: ");
    scanf("%f", &num1);
    printf("what is num2 ");
    scanf("%f", &num2);
    printf("what is the operator ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+' : result = num1+num2; break;
        case '/' : result = num1/num2; break;
        case '^' : result = pow(num1, num2); break;
    }
    printf("%f %c %f = %f\n", num1, op, num2, result);
    return 0;
}