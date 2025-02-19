 #include<stdio.h>
 #include<stdlib.h>

 struct node{
    struct node *prev;
    int data;
    struct node *next;
 };

 int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *first = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 7;
    head->next = first;

    first->prev = head;
    first->data = 9;
    first->next = second;

    second->prev = first;
    second->data = 11;
    second->next = NULL;

    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->prev = NULL;
    new->data = 11;
    new->next = NULL;


    struct node *temp = head;
    while(temp->data != 7){
        temp = temp->next;
    }
    new->next = temp->next;
    new->prev = temp;
    temp->next->prev = new;
    temp->next = new;

void delete(struct node *head, int data){
    struct node *temp2 = head;
    while(temp2->data != 11){
        temp2 = temp2->next;
    }
    temp2->prev->next = temp2->next;
    temp2->next->prev = temp2->prev;
    free(temp2);
}
delete(head,11);


    struct node *ptr;
    ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }

return 0;
 }