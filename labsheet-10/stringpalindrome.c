#include <stdio.h>
#include <string.h>

int ispalindrome(char s[]);//declaring the function
int main()
{
    char s[100];
    printf("enter the word: ");//prompting the user for the word 
    scanf("%s",s);//reading the word only 
    if(ispalindrome(s))//calling the function
    {
        printf("it is a plaindrome\n");
    }
    else{
        printf("it is not a palindrome\n");
    }
}
int ispalindrome(char s[])
{
    int len = strlen(s);//finding lenght of the string
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[len-i-1])//checking if corresponding element are same if not end by sending 0 to the main signifying false
        {
            return 0;
        }
    }
    return 1;//if not send 1 to main signifying true 
}
