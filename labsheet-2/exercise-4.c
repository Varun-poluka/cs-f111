#include <stdio.h>

int main()
{
    float a, b , diff, r;
    printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
    printf("Enter beginning odometer reading ");
    scanf("%f", &a);
    printf("Enter ending odometer reading");
    scanf("%f", &b);
    diff = b-a;
    r = diff*25;
    printf("you have travelled %f miles. at Rs.25 per mile,\n", diff);
    printf("your reimbursement is Rs.%f\n", r);
    return 0;
}    