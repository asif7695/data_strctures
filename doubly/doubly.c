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
   struct node *g = (struct node*)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 12;
    head->next = first;
    

    first->prev = head;
    first->data = 13;
    first->next = g;    
    

    g->prev = first;
    g->data = 14;
    g->next = NULL;


return 0;
 }