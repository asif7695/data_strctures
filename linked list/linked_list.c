#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

int main(){
struct node *head = (struct node*)malloc(sizeof(struct node));
struct node *second = (struct node*)malloc(sizeof(struct node));

head->data = 45;
head->next = NULL;  

printf("%d",head->data);

    



return 0;
}
