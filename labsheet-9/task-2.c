#include <stdio.h>
//modularising reading modifying and printing the book prices as per given data 
float readlist (float a[], int n);
float modifylist(float a[], int n);
void printlist(float a[], int n);
int main()
{
    float bookprices[100];
    int n;
    printf("number of books: ");
    scanf("%d", &n);
    readlist(bookprices,n);
    modifylist(bookprices,n);
    printlist(bookprices,n);
}
float readlist (float a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("what is the price of %d book: ", i+1);
        scanf("%f", &a[i]);
    }
    return *a;//returning the array using dereferencing after reading the prices of each book
}
float modifylist(float a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>=250 && a[i]<=500)
        {
            a[i]=a[i]-(0.1*a[i]);
        }
        else if(a[i]>500)
        {
            a[i]=a[i]-(0.25*a[i]);
        }
        else{
            a[i]=a[i];
        }
    }
    return *a;//returning the array after modifying the prices
}
void printlist(float a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("new price of the %d books is %f\n",i+1, a[i]);//printing the new prices of the books
    }
}