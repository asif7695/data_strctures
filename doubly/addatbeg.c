 #include<stdio.h>
 #include<stdlib.h>

 struct node{
    struct node *prev;
    int data;
    struct node *next;
 };
struct node *add(struct node* head,int data){
struct node *temp = malloc(sizeof(struct node));
temp->prev = NULL;
temp->data = data;
temp->next = NULL;
head = temp;
return temp;
}

struct node *adtabeg(struct node *head, int data){
    struct node * temp = malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    
    temp->next = head;
    head->prev = temp;
    head = temp;
    
}   

 int main(){

    struct node *head = NULL;
    struct node *ptr ;
    head = add(head,10);
    head = adtabeg(head,23);

ptr = head;
while(ptr != NULL){
    printf("%d ",ptr->data);
    ptr = ptr->next;
}
return 0;
 }