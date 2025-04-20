#include <stdio.h>

void multiply(int a,int b,int c,int d,float m1[a][b],float m2[c][d],float m3[a][d]);//declaring the function
int main()
{
    int a,b,c,d;
    //reading the number of rows and columns in the two matrices
    printf("number of rows in first matrix: ");
    scanf("%d", &a);
    printf("number of columns in the first matrix: ");
    scanf("%d", &b);
    printf("number of rows in second matrix: ");
    scanf("%d", &c);
    printf("number of columns in the second matrix: ");
    scanf("%d", &d);
    if(b!=c)//two matrices are only multipliable if rows of first one equal columns of the second one
    {
        printf("the two matric connot be multipled\n");
        return 0;
    }
    float m1[a][b],m2[c][d],m3[a][d];//declaring the three matrices
    //reading the values of the first matrix
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d and %d element of the first matrix: ",i+1,j+1);
            scanf("%f", &m1[i][j]);
        }
    }
    //reading the values of the second matrix
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<d;j++)
        {
            printf("%d and %d element of the second matrix: ", i+1,j+1);
            scanf("%f", &m2[i][j]);
        }
    }
    multiply(a,b,c,d,m1,m2,m3);//calling the function
    //printing the answer matrix after multiplying
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<d;j++)
        {
            printf("%f\t", m3[i][j]);
        }
        printf("\n");
    }
}
void multiply(int a,int b,int c,int d,float m1[a][b],float m2[c][d],float m3[a][d])/*defining the function number of rows and columns 
should be given first then 2d array should always be passed with their size(atleast of columns)*/
{
    for(int i=0;i<a;i++)//iterating thr rows of the first matrix
    {
        for(int j=0;j<d;j++)//iterating the columns of the second matrix
        {
            m3[i][j]=0;
            for(int k=0;k<b;k++)//iterating to access each individual element of the respective matrix
            {
                m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];//multiplying the value using laws of matric multiplication
            }
        }
    }
}