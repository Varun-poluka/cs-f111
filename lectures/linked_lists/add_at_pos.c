#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void traverse(struct node *head);
void print(struct node *head);
void add_pos(struct node *head,int x,int y);
//make a sll
int main()
{
    int x=13;
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head -> data =10;
    head -> link = NULL;
    struct node *current = (struct node*)malloc(sizeof(struct node));
    current -> data = 11;
    current -> link = NULL;
    head -> link = current;
    current = (struct node*)malloc(sizeof(struct node));
    current -> data = 12;
    current -> link = NULL;
    head -> link -> link  = current;
    printf("the data and nodes before adding the node is: ");
    traverse(head);
    print(head);
    add_pos(head,3,13);//call the function to add 13 at the third position
    printf("the data and nodes after adding the node is: ");
    traverse(head);
    print(head);
}
void add_pos(struct node *head,int x,int y)
{
    struct node *ptr = head;//pointer with the value in head to traverse
    struct node *ptr1 = (struct node*)malloc(sizeof(struct node));//creating new node
    ptr1->data = x;//adding the number into the data of the linked list
    ptr1->link = NULL;
    for(int i=1;i<x-1;i++)//iterate from first node to the node before 
    {
        ptr = ptr->link;
    }
    ptr1->link=ptr->link;
    ptr->link = ptr1;
}
void traverse(struct node *head)
{
    int count=0;
    struct node *ptr = head;
    while(ptr!=NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("number of nodes is %d\n", count);
}
void print(struct node *head)
{
    struct node *ptr = head;
    while (ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr -> link;
    }
    printf("\n");
}