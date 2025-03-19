#include <stdio.h>
void towerofhanoi(int n , char from_rod, char to_rod, char aux_rod);
int main()
{
    int n = 4;
    towerofhanoi(n,'A','B','C');
    return 0;
}
void towerofhanoi(int n , char from_rod, char to_rod, char aux_rod)
{
    if(n==1)
    {
        printf("move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    towerofhanoi(n-1,from_rod,to_rod,aux_rod);
    printf("move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerofhanoi(n-1,aux_rod,to_rod,from_rod);
    
}