#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void add_end(struct node *head,int x);
void traverse(struct node *head);
void print(struct node *head);
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
    add_end(head,13);//call the function to add 13 at the end
    printf("the data and nodes after adding the node is: ");
    traverse(head);
    print(head);
}
void add_end(struct node *head,int x)
{
    struct node *ptr=head;
    struct node *temp = (struct node*)malloc(sizeof(struct node));//create another node to add at the end who's address is stores in temp 
    temp -> data = x;
    temp -> link = NULL;
    while(ptr->link!=NULL)//start from the first node till the end of the newlu created node if found end
    {
        ptr = ptr->link;//update ptr to the next node
    }
    ptr->link = temp;//storing the address of the new node 
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