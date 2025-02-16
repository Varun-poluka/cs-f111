#include <stdio.h>

int main()
{
    char char1, char2, temp; 
    printf("what are char1 and char2? ");
    scanf("%c%c", &char1, &char2);

    temp = char1;
    char1 = char2;//interchaning charecters
    char2 = temp;

    printf("%c%c\n", char1, char2);
}