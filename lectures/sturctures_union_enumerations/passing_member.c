#include <stdio.h>
struct student 
{
    char name[50];
    int age;
    int id;
    float marks;
};
void print(char name[],int age,int id,float marks);
int main()
{
    struct student s1 = {"VARUN", 18, 0527,199};
    print(s1.name,s1.age,s1.id,s1.marks);//members of a structures as individual entities to a function
}

void print(char name[],int age,int id,float marks)
{
    printf("%s %d %d %.2f\n",name,age,id,marks);
}