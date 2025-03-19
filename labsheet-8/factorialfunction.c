#include <stdio.h>
//finding factorial using reccursive functions
int fact (int);//decalring the function
int main()
{
    int n;
    printf("what is the value of n: ");
    scanf("%d", &n);
    printf("%d\n", fact(n));//calling the function
    return 0;
}
int fact (int n)//defining the function 
{
    if(n==1)
    {
        return 1;
    }
    else 
    {
        return n*fact(n-1);//reccursive function 
    }
    
}
