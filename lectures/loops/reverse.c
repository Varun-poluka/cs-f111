#include <stdio.h>
//reversing a number
int main()
{ int n, original , reversed=0;
    printf("enter the number ");
    scanf("%d", &n);

    for(int i=n;i>0;i=i/10)
    {
        int reminder = i%10;
        reversed = reversed*10+reminder;
    }
    printf("%d\n", reversed);
}