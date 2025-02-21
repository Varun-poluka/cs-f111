#include <stdio.h>

int main()
{
    int decimal;
    long int binary=0,place=1;
    printf("enter the decimal number ");
    scanf("%d", &decimal);

    for(int i=decimal;i>0;i=i/2)
    {
        int reminder = decimal%2;
        binary = binary +reminder*place;
        decimal = decimal/2;
        place = place*10;
    }
    printf("%ld\n", binary );
}