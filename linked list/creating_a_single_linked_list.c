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

struct node *current = (struct node*)malloc(sizeof(struct node));
current->data = 23;
current->next = NULL;
head->next = current;

current = (struct node*)malloc(sizeof(struct node));
current->data = 45;
current->next = NULL;

head->next->next = current;

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
display(head);
// printf("%d ",head->data);
// printf("%d ",head->next->data);
// printf("%d ",head->next->next->data);


return 0;
}