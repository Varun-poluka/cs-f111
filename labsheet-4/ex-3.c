#include <stdio.h>
//finding a alphabet is vowel 
int main()
{
    char c;

    printf("what is the alphabet: ");
    scanf("%c", &c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') // || denotes "or" in c
    {
        printf("it is a vowel\n");
    }
    else
    {
        printf("it is a consonant\n");
    }

}