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

struct node *deletion_first(struct node *head )
{
     struct node *ptr = head;
     head = head-> next;
     free(ptr);
     return head ;  

}
struct node *delete_at_index(struct node *head, int index)
{
    struct node* p= head;
    struct node* q= head->next;

    for(int i=0;i< index-1;i++)
    {
        p = p->next;
        q = q->next;
     }
    p->next= q->next;
    free(q);
    return head;
}
struct node *deletionatlast(struct node *head)
{
    struct node *p=head;
    struct node *q= head->next;

    while(q->next !=NULL)
    {
       p= p->next;
       q= q->next;
    }
    p->next = NULL;
    free(q);
    return head;
   
}
struct node *deleteatvalue(struct node *head,int value) {
    struct node* p= head;
    struct node* q= head->next;

     while(q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
     }
     if(q->data == value){
        p->next= q->next;
        free(q);
     }
    
    return head;
}
int main(){
     struct node *head;
     struct node *second;
     struct node *third;
     struct node *fourth;

    //  alloocate memory for noeds in the linked list in heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    // link first and second nodes
    head->data =11;
    head->next= second;

    // link second and third nodes
    second->data = 3;
    second->next = third;

    // terminate the list at the third node
    third->data = 20;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    // traverse the linked list
    printf("Linked list before insertion:\n");
    linkedlisttraversal(head);

    printf("Linked list after insertion:\n");
    // head = deletion_first(head);
    // head = delete_at_index(head, 2);
    head = deletionatlast(head);
   // head = deleteatvalue(head,20);
    linkedlisttraversal(head);
    return 0;
}