#include <stdio.h>

void quad(int a[], int b[], int n);
int main()
{
    int a[100],b[100],n;
    printf("number of points: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        printf("what is the %d point: ", i);
        scanf("%d%d", &a[i-1],&b[i-1]);//taking inputs of the points in two arraya one for x and one for y
    }
    quad(a,b,n);//calling the function by passing the arrays 
}
void quad(int a[], int b[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>0 && b[i]>0)
        {
            printf("%d point is in 1st quadrant\n",i+1);
        }
        else if(a[i]>0 && b[i]<0)
        {
            printf("%d point is in 4th quadrant\n",i+1);
        }
        else if(a[i]<0 && b[i]>0)
        {
            printf("%d point is in 2nd quadrant\n",i+1);
        }
        else if(a[i]<0 && b[i]<0)
        {
            printf("%d point is in 3rd quadrant\n",i+1);
        }
        else
        {
            printf("%d point is origin\n",i+1);
        }
    }
}