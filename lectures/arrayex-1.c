#include <stdio.h>
//taking 10 values storing them in a array and printing them.
int main()
{
    int marks[10];
    int i=0;
    while(i<10)
    {
        scanf("%d",&marks[i]);
        i++;
    }
    for(int j=0;j<10;j++)
    {
        printf("%d\n", marks[j]);
    }
}