 #include<stdio.h>
 #include<stdlib.h>

 struct node{
    int data;
    struct node *next;
 };

 int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));

    head->data  =7;
    head->next = first;


    first->data = 9;
    first->next = second;

    second->data = 11;
    second->next = NULL;

    // struct node *new = (struct node*)malloc(sizeof(struct node));
    // new->prev = NULL;
    // new->data = 11;
    // new->next = NULL;

    // new->next = head->next;
    // new->prev = head;
    // head->next->prev = new;
    // head->next = new;

    struct node *ptr;
    ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }

return 0;
 }