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

struct node *curr = (struct node*)malloc(sizeof(struct node));
curr->data = 23;
curr->next = NULL;

head->next = curr;
void insert_end(struct node *head,int data){
    struct node *ptr,*temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->next = NULL;

    while(ptr->next != NULL){
        ptr = ptr->next;
    }
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

void insert_pos(struct node *head,int data,int pos){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    while(pos != 2){
        ptr = ptr->next;
        pos--;
    }

    temp->next = ptr->next;
    ptr->next = temp;

}


insert_end(head,34);
insert_end(head,67);
insert_end(head,45);
insert_pos(head,566,3);
display(head);





return 0;
}