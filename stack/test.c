#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
int push(struct node *head, int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));  
    struct node *ptr = head;
    temp->data = data;
    temp->next = NULL;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
}

 

int main(){

struct node *head = (struct node*)malloc(sizeof(struct node));
head->data = 12;
head->next = NULL;
    push(head,10);
    push(head,35);
    push(head,34);

    struct node *ptr;
    ptr = head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }



return 0;
}