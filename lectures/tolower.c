#include <stdio.h>
//to print the lowercase letter of any given alphabet using functions
char Tolower(char);//declaring the function
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%c\n", Tolower(ch));//calling the function
}
char Tolower(char ch)//defing the function
{
    return (ch>=65 && ch<=90) ? ch+32 : ch;//ascci 65-90 are for captial letters and 97-122 are for lowercase 
}