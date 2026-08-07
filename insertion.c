#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct node* insertatfirst(struct node *head, int data)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}    

struct node* insertionatindex(struct node *head, int data, int index){
      struct node*ptr ;
    ptr = (struct node*)malloc(sizeof(struct node));
     ptr->data=data;
    struct node*p = head;

    int i=0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct node* insertionafternode(struct node *head, struct node *prevnode, int data)
{ 
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr-> data = data;
    struct node*p=head;

    ptr->next = prevnode->next;
    prevnode->next = ptr;
    return head;
}
    
    struct node* insertionatend(struct node *head, int data)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
     ptr->data=data;
    struct node *p= head;

    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
int main(){
     struct node *head;
     struct node *second;
     struct node *third;

    //  alloocate memory for noeds in the linked list in heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // link first and second nodes
    head->data =11;
    head->next= second;

    // link second and third nodes
    second->data = 3;
    second->next = third;

    // terminate the list at the third node
    third->data = 20;
    third->next = NULL;

    // traverse the linked list
    printf("Linked list before insertion:\n");
    linkedlisttraversal(head);
    printf("Linked list after insertion:\n");
    // head= insertionatfirst(head,5);
   // head = insertionatindex(head, 15, 2);
    // head = insertionatend(head, 30);
   head = insertionafternode(head, second, 25);
    linkedlisttraversal(head);

    return 0;
}