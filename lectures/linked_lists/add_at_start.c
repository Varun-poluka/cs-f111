#include <stdio.h>
#include <stdlib.h>
#define point node
struct node
{
    int data;
    struct node *link;
};
void traverse(struct node *head);
struct node* add_start (struct node *head , int x);
void print(struct node *head);
int main()
{
    int x=13;
    struct node *head = (struct point*)malloc(sizeof(struct node));
    head -> data =10;
    head -> link = NULL;
    struct point *current = (struct point*)malloc(sizeof(struct node));
    current -> data = 11;
    current -> link = NULL;
    head -> link = current;
    current = (struct point*)malloc(sizeof(struct node));
    current -> data = 12;
    current -> link = NULL;
    head -> link -> link  = current;
    printf("the data and nodes before adding the node is: ");
    traverse(head);
    print(head);
    head = add_start(head,9);//call the function to add 9 and return the new value of head
    printf("the data and nodes after adding the node is: ");
    traverse(head);
    print(head);
}
struct node* add_start (struct node *head , int x)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));//creates the new node and stores its address in ptr 
    ptr -> data = x;
    ptr -> link = head;//the address in the new node is replaces with address in head
    head = ptr;//address in head is replaced with address of new node which has been added at the start
    return head;//return the new head to the main
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