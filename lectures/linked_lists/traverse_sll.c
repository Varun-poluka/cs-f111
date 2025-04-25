#include <stdio.h>
#include <stdlib.h>
//first creating a single linked list
struct node
{
    int data;
    struct node *link;
};
void nodes(struct node* head);
void print(struct node* head);
int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;
    struct node *current = (struct node*)malloc(sizeof(struct node));
    current -> data = 98;
    current -> link = NULL;
    head -> link = current;
    current = (struct node*)malloc(sizeof(struct node));
    current -> data = 90;
    current -> link = NULL;
    head -> link -> link = current;
    nodes(head);//calling the function to count the node
    print(head);//calling the function to print the data in each node
}
void nodes(struct node* head)
{
    int count=0;
    if(head == NULL)
    {
        printf("linked list is empty\n");
        return;
    }
    struct node *ptr = head;//storing the addresses of head into another pointer to not change head and loose first node
    while(ptr!=NULL)//checking if address in the node is NULL
    {
        count++;//if its not NULL it is a node so incresing the count
        ptr = ptr -> link;//updating pointer to go to the next node 
    }
    printf("the linked list has %d nodes\n", count);
}
void print(struct node* head)
{
    struct node* ptr=head;//storing the head adress in a diff pointer 
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);//printing the data in each node
        ptr = ptr->link;//updating pointer to next nodex
    }
    printf("\n");
}
