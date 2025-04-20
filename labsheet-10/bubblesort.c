#include <stdio.h>
//using bubble sort to sort an array
void bubblesort(int a[],int n);
void swap (int *a,int*b);
int main()
{
    int n,a[100];
    printf("the number of elements: ");
    scanf("%d", &n);
    printf("enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    bubblesort(a,n);//calling the function to sort
}
void bubblesort(int a[],int n)
{
    int count=0,i,swaps=0;
    for(i=0;i<n;i++)//each iteration one element is put in the right spot
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])//choosing first element and successively comparing with the next element till the end of unsorted list
            {
                swap(&a[j], &a[j+1]);//calling the function swap and sending the addresses of the elements needed to be swapped
                count++;//keepting track of how many times elemenents were swapped in putting one element in right spot
            }
        }
        if(count==0)//if no swap were performed in any iteration it means that the list is sorted
        {
            break;//break from the loop as further iterations are not needed (optimised bubble sort)
        }
        else{
            swaps = swaps+count;//keeping track of the total number of swaps performed in all iterations
            count = 0;//putting count to 0 again to check swaps performed in the next interation
        }
    }
    printf("the number of iterations performed were %d \n",i);
    printf("the number of swaps performed were %d \n", swaps);
    printf("the sorted list is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void swap (int *a,int*b)//directly changing the values in the addresses of the variable by dereferencing 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}