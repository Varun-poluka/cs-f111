#include <stdio.h>
//declaring all the funcitions used
void populatemarks(int students,int subjects,float marks[students][subjects+2]);
void computetotal(int students,int subjects,float marks[students][subjects+2]);
float average(int students,int subjects,float marks[students][subjects+2],int i);
float computemaxtotal(int students,int subjects,float marks[students][subjects+2],float *maxid);
int main()
{
    float maxid;
    int students,subjects;
    printf("the number of students: ");
    scanf("%d", &students);
    printf("the number of subjects: ");
    scanf("%d", &subjects);
    float marks[students][subjects+2];//declaring a 2d array of number of students and subjects with 2 more columns on id and tot
    //calling the functions
    populatemarks(students,subjects,marks);//fills the table with the values
    computetotal(students,subjects,marks);//computes the total of each students and fills in the last column
    //prinitng the first row of the table with the headings
    printf("\nId no\t");
    for(int i=1;i<=subjects;i++)
    {
        printf("sub%d\t", i);
    }
    printf("total\n");
    //printing the filled table
    for(int i=0;i<students;i++)
    {
        for(int j=0;j<subjects+2;j++)
        {
            printf("%.2f\t", marks[i][j]);
        }
        printf("\n");
    }
    //printing the average of each student
    for(int i=0;i<students;i++)
    {
        printf("the average of students %d is %.2f\n", i+1,average(students,subjects,marks,i+1));//calling the average function
    }
    float maxval=computemaxtotal(students, subjects,marks,&maxid);//calling the function..returns two values maxid is changes by pass by refernce
    printf("the maximum total is %.2f with id no %.1f\n", maxval,maxid);
}
void populatemarks(int students,int subjects, float marks[students][subjects+2])
{
    for(int i=0;i<students;i++)//loops to initialise first column with id and last column with 0
    {
        marks[i][0]=i+1;
        marks[i][subjects+1]=0;
    }
    //nested loops to prompt the user of the nescessary empty values in the table 
    for(int i=0;i<students;i++)
    {
        for (int j=1;j<=subjects;j++)
        {
            printf("marks of %d students in %d subject: ", i+1,j);
            scanf("%f", &marks[i][j]);
        }
    }
}
void computetotal(int students,int subjects,float marks[students][subjects+2])
{
    int sum = 0;
    //loops to add the marks of each student
    for(int i=0;i<students;i++)
    {
        for(int j=1;j<=subjects;j++)
        {
            sum = sum+marks[i][j];
        }
        marks[i][subjects+1]=sum;//total sum of each student
        sum = 0;//initialising sum again to 0 to run the loops again for other students
    }
}
float average(int students,int subjects,float marks[students][subjects+2],int i)
{
    float avg;
    avg = marks[i-1][subjects+1]/subjects;//finding average using the total column in the tables
    return avg;//returns the average of each student to main
}
float computemaxtotal(int students,int subjects,float marks[students][subjects+2],float *maxid)
{
    float maxval=marks[0][subjects+1];//assuming the first students has the maximum
    *maxid  = 1;
    //looping to compare first student with other students
    for(int i=1;i<students;i++)
    {
        if(marks[i][subjects+1]>maxval)
        {
            maxval=marks[i][subjects+1];//if found change the max
            *maxid = i+1;//change the addresses directly where the id of the student is stored
        }
    }
    return maxval;//returning maximum value
}