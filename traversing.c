#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    //  alloocate memory for noeds in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // link first and second nodes
    head->data = 11;
    head->next = second;

    // link second and third nodes
    second->data = 3;
    second->next = third;

    // terminate the list at the third node
    third->data = 20;
    third->next = NULL;

    // traverse the linked list
    linkedlisttraversal(head);

    return 0;
}