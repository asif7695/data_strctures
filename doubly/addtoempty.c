 #include<stdio.h>
 #include<stdlib.h>

 struct node{
    struct node *prev;
    int data;
    struct node *next;
 };

 int main(){


struct node *add(struct node* head,int data){
struct node *temp = malloc(sizeof(struct node));
temp->prev = NULL;
temp->data = data;
temp->next = NULL;
head = temp;
return temp;

}

    struct node *head = NULL;
    head = add(head,10);
    printf("%d ",head->data);


return 0;
 }