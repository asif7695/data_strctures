#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
struct node *head = (struct node*)malloc(sizeof(struct node));
head->data = 12;
head->next = NULL;

void insert_end(struct node *head, int data){
    struct node *ptr,*temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    temp->data = data;
    temp->next = NULL;

    ptr->next = temp;

}
void display(struct node *head){
    if(head == NULL){
        printf("empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }


}

insert_end(head,34);
insert_end(head,67);
insert_end(head,45);
display(head);



return 0;
}