#include <stdio.h>
#include <stdlib.h>
//creating a single linked list
struct node//defining a self referential structure
{
    int data;
    struct node *link;
};
struct node* delete (struct node *head,int x);
int main()
{
    struct node *head=NULL; //defining a head pointer 
    head = (struct node*)malloc(sizeof(struct node));//creating the first node and storing its adress in head pointer
    head -> data = 45;
    head -> link = NULL;//setting the address in first node to null
    struct node *current = NULL;//creating a another pointer which will point to any list we need to create 
    current = (struct node*)malloc(sizeof(struct node));//creating second node and storing its address in current pointer
    current -> data = 95;
    current -> link = NULL;//setting the adress in second node to null 
    head -> link = current;//using pointer changing the adress in first node to adress stored in current which is address of second node
    current = (struct node*)malloc(sizeof(struct node));//creating a another node and again sotring its address in current 
    current -> data = 3;
    current -> link = NULL;//setting the link in third node to null
    head -> link -> link = current;//chaning the address in second list to address stored in current which has the address of the third node
    head = delete(head,2);
    struct node *ptr = head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr ->data);
        ptr = ptr->link;
    }
    printf("\n");
}
struct node* delete (struct node *head,int x)
{
    struct node *ptr1=head;
    struct node *ptr2=head;//declare two pointers each pointing at head
    for(int i=1;i<x;i++)//till node 1 till the node to be deleted
    {
        ptr2=ptr1;//ptr 2 should be one behind ptr1 
        ptr1 = ptr1->link;//traversing 
    }
    ptr2->link = ptr1->link;//assgning the addresss of the node next to the one thats to be deleted to the node before the one to be deleted
    free(ptr1);//freeing the node to be deleted
    ptr1=NULL;
    return head;
}