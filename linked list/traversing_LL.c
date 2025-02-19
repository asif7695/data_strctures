#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){

struct node *head = (struct node*)malloc(sizeof(struct node));
head->data = 23;
head->next = NULL;

struct node *curr = (struct node*)malloc(sizeof(struct node));
curr->data = 12;
curr->next =NULL;
head->next = curr;

curr = (struct node*)malloc(sizeof(struct node));
curr->data = 34;
curr->next = NULL;
head->next->next = curr;

void count_nodes(struct node *head){
    int count = 0;
    if (head == NULL){
        printf("lsit is eampty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        count++;
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
printf("total = %d",count);
}

// printf("%d ",head->data);
// printf("%d ",head->next->data);
// printf("%d ",head->next->next->data);

count_nodes(head);





return 0;
}