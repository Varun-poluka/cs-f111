#include <stdio.h>

int search(int a[], int n, int x);
void delete(int a[], int *n, int i);
int main()
{
    int a[100],n,x,i;
    printf("the numer of elements: ");
    scanf("%d", &n);
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the value to be searched: ");
    scanf("%d", &x);
    i = search(a,n,x);
    delete(a,&n,i);

    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int search(int a[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)//checking if each element in the array is equal to the element needede
        {
            return i;//if found return the address of the element 
        }
    }
    return -1;
}
void delete(int a[], int *n, int i)
{
    for(int j=i+1;j<*n;j++)//starting from the element next to the element that needs to be deleted till the last element
    {
        a[j-1]=a[j];//putting the next element in the address of the element that needs to be deleted and moving next elements to left
    }
    (*n)--;//decreasing array size
}