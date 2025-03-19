#include <stdio.h>
//interchanging uppercase to lowercase and vice-versa
int main()
{
    char ch;
    printf("enter the alphabet ");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z')
    {
        ch = ch-('a'-'A');
        printf("%c\n", ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        ch = ch+('a'-'A');
        printf("%c\n", ch);
    }
    else
    {
        printf("not a alphabet enetered\n");
    }
}    