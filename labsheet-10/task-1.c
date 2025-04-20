#include <stdio.h>

float computeminimum(float a[], int n);//declaring the function
int main()
{
    float a[]={8.9,7.75,14,16,5.7,10.05,23.57};
    int n = 7;
    float minval = computeminimum(a,n);//calling the function
    printf("the minimum value is %f\n", minval);
}
float computeminimum(float a[], int n)
{
    float min = a[0];//initialising the first element as minimum
    for(int i=1;i<n;i++)
    {
        if(min>a[i])//checking with subsequent element 
        {
            min = a[i];//if found one is lesser change the value of min
        }
    }
    return min;//return the min value to main
}