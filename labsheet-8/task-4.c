#include <stdio.h>

int multiply(int x, int y);//decalring the function
int main()
{
    int x,y;
    printf("enter the two numbers: ");
    scanf("%d%d", &x,&y);
    printf("%d*%d=%d\n", x,y,multiply(x,y));//calling the function
}
int multiply(int x, int y)
{
    if(y==1)//base case
    {
        return x;
    }
    else{
        return x+multiply(x,y-1);//using the recursive given in the question
    }
}