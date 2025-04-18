#include <stdio.h>
#include <math.h>

void swap(float *a , float *b);
void bubblesort(float a[],int n);
float variance(float a[],float avg, int n);
float skewness(float a[], int n, float avg,float sd);
float kurtosis(float a[],int n,float avg,float sd);//declaring all the functions written below
int main()
{
    int n;
    float a[25];
    float avg,sd;

    printf("enter the numbers of number of elements: ");
    scanf("%d", &n);//prompting for number of values
    printf("enter the %d values: \n", n);
    for(int i=0;i<n;i++)
    {
        scanf("%f", &a[i]);//taking input into the array
    }
    bubblesort(a, n);//calling the function bubble sort to sort the function
    printf("the largest, second largest and the third largest values are: ");
    for(int i=n-1;i>n-4;i--)
    {
        printf("%f ", a[i]);//printing the last three values of the sorted array
    }
    printf("\n");
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    avg = (float)sum/n;//finding average of the values in the array
    sd = sqrt(variance(a,avg,n));//calling function variance to find standard deviation
    printf("the variance and sd of the data is %f and %f\n", variance(a,avg,n), sd); 
    printf("the skeness is %f\n", skewness(a,n,avg,sd));//calling function skewness
    printf("the kurtosis is %f\n", kurtosis(a,n,avg,sd));//calling function kurtosis
}
void swap(float *a , float *b)//function for swap using the adressed of the location where values are
{
    int temp;
    temp = *a;//using dereference to change the value in the address the pointer is pointing to
    *a = *b;
    *b = temp;
}
void bubblesort(float a[],int n)//function of bubble sort
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j], &a[j+1]);
            }
        }
    }
}
float variance(float a[],float avg, int n)//function to find the variance 
{
    int sum = 0;
    float variance;
    for(int i=0;i<n;i++)
    {
        sum = sum+(a[i]*a[i]);
    }
    variance = (((sum)/n)-(avg*avg));//variance formula
    return variance;
}
float skewness(float a[], int n, float avg,float sd)//function to find the skewness
{
    int sum = 0;
    float skewness;
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]-avg;//finding deviation of all values in the array from the average
    }
    for(int i=0;i<n;i++)
    {
        sum = sum+(a[i]*a[i]*a[i]);
    }
    skewness = ((sum)/(n*sd*sd*sd));//skewness formula
    return skewness;
}
float kurtosis(float a[],int n,float avg,float sd)//function to find the kurtosis 
{
    int sum = 0;
    float kurtosis;
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]-avg;//finding deviation of all values in the array from the average
    }
    for(int i=0;i<n;i++)
    {
        sum = sum+(a[i]*a[i]*a[i]*a[i]);//formula of kurtosis
    }
    kurtosis = ((sum)/(n*sd*sd*sd*sd));
    return kurtosis;
}
