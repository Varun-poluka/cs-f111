#include <stdio.h>

int main ()
{
    float total = 69, average;
    int n = 7;

    average  = total/n; // implicit typecasting - data type are converted into one higher in the hirearchy
    printf("average = %f\n", average); // n is converted to float automatically.
}