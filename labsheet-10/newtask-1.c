#include <stdio.h>
//function to return the minimum value in a array with its index using pass by reference 
float computemin(float a[],int n,int *i);//declaring the function
int main()
{
    float a[]={8.7,7.75,14,16,5.7,10.05,23.57};
    int n=7,i=0;
    float minval = computemin(a,n,&i);//calling the function and passing the address of the varaible where the index is stored
    printf("the minimum value is %f at %d index\n", minval,i);
}
float computemin(float a[],int n,int *i)
{
    float min = a[0];
    for(int j=1;j<n;j++)
    {
        if(min>a[j])
        {
            min = a[j];
            *i = j;//changing the actual value in the address of the variable which stores the index 
        }    
    }
    return min;//returning the minimum value 
}