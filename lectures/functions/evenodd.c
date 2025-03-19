#include <stdio.h>
//finding if the number is even or odd using functions
int iseven (int);//decalring the function
int main()
{
    int a;
    scanf("%d", &a);
    if(iseven(a))//calling the fucntion and 1 is true and 0 is false
    {
        printf("it is even\n");
    }
    else
    {
        printf("it is odd\n");
    }
}
int iseven (int a)//defining the function
{
    if(a%2==0)//checking if the number is even or odd
    {
        return 1;
    }
    else
    {
        return 0;
    }
}