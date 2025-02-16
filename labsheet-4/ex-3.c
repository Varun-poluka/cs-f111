#include <stdio.h>

int main()
{
    char c;

    printf("what is the alphabet: ");
    scanf("%c", &c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("it is a vowel\n");
    }
    else
    {
        printf("it is a consonant\n");
    }

}