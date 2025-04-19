#include <stdio.h>

int main()
{
    float a = 7.7;
    char ch = 'A';
    float *flptr = &a;
    char *chptr = &ch;//assnging addresses of a and ch to pointer variables
    printf("%p %p\n", flptr,chptr); //printing the addresses stores in the pointer variable 
    printf("%lu %lu\n", sizeof(flptr), sizeof(chptr));//;printing the size of memory used to store the pointer variables
}