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

struct node* insert_beg(struct node *head,int data){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;

    return head;
}


insert_end(head,34);
insert_end(head,67);
insert_end(head,45);
head = insert_beg(head,800);
head = insert_beg(head,2425);
display(head);





return 0;
}