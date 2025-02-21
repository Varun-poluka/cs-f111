#include <stdio.h>
//finding if vowel or consonant
int main()
{
    char ch;
    printf("enter the alphabet ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' : printf("it is a vowel\n"); break;
        default : printf("it is a consonant\n");
    }
}   