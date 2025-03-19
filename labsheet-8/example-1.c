#include <stdio.h>
#include <math.h>
//finding the value of sin using the tayor series with the help of functions
int fact(int);
float Sin (float x, int n);//declaring the functions 
int main()
{
    float x,sinsum;
    int n;
    printf("what is the values of x and n ");
    scanf("%f%d",&x,&n);
    sinsum = Sin(x,n);//calling the sin function
    printf("the value of sin is %f\n", sinsum);
    return 0;
}

int fact (int n)//defining the factorial function
{
    int fact =1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;//finding factorial of a givn nummber 
    }
    return fact;
}

float Sin (float x, int n)//defining the sin function 
{
    float sum = 0.0,sin_sum;
    int sign = 1;
    for (int i=1;i<=n;i++)
    {
        sin_sum = sign*(pow(x,2*i-1)/fact(2*i-1));//calling the factorial function
        sign = sign*-1;
        sum = sum+sin_sum;//finding the sum of the series 
    }
    return sum;
}
