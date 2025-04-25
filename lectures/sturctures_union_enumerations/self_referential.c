#include <stdio.h>
//self referential strcutures
struct var
{
    int i;
    char ch;
    struct var *ptr;//pointer which point to the same structure varaible 
};
int main()
{
    struct var v1;
    struct var v2;
    v1.i=10;
    v1.ch='a';
    v1.ptr=NULL;
    v2.i=20;
    v2.ch='b';
    v2.ptr=NULL;
    v1.ptr=&v2;//pointing the pointer in the first variable to the second variable 
    printf("%d %c\n", v1.ptr->i,v1.ptr->ch);//printing the valyues of second variable using first varaible
}
