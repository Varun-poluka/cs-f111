#include <stdio.h>

void insert(int a[], int *n,int x, int i);
int main()
{
    int a[100],n,x,i;
    printf("number of elements: ");
    scanf("%d", &n);
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("which element at which index: ");
    scanf("%d%d", &x,&i);
    insert(a,&n,x,i);

    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insert(int a[], int *n,int x, int i)
{
    (*n)++;//increasing array size first
    for(int j=*n-1;j>=i;j--)//starting from address of new array size-1 back till needed index
    {
        a[j]=a[j-1];//putting the value of one before j into j
    }
    a[i]=x;//inserting x at empty index i
}