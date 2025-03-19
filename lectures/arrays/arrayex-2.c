#include <stdio.h>
//average of marks of n students
int main()
{
    int n;
    printf("number of students ");
    scanf("%d", &n);

    int students[100];//definig large array assuming n is always less than 100
    for(int i=0;i<n;i++)
    {
        scanf("%d", &students[i]);//storing the values of marks 
    }
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum+students[i];//adding each marks in the array
    }
    float average = sum/n;

    printf("%f\n", average);
}