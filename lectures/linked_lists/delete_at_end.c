#include <stdio.h>
#include <stdlib.h>
struct node//defining a self referential structure
{
    int data;
    struct node *link;
};
struct node* delete(struct node *head);
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
    head = delete(head);
    struct node *ptr = head;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}
struct node* delete(struct node *head)
{
    struct node *ptr1=head;
    struct node *ptr2=head;//decalre two pointer and give them same address as head and point to first 
    while (ptr1->link!=NULL)//while the  next node doesnt have null
    {
        ptr2=ptr1;//
        ptr1=ptr1->link;//go to the next address
    }
    ptr2->link = NULL;//put the new last node link to NULL
    free(ptr1);//free the removed node
    ptr1=NULL;//put it to null
    return head;
}