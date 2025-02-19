#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *del_last(struct node *head){
    struct node * sl;
    if(head == NULL){
        return NULL;
    }
    else if(head->next == NULL){
        free(head);
        return NULL;
    }

    sl = head;
    while(sl->next->next == NULL){
        sl = sl->next;
    }
    free(sl->next);
    sl->next = NULL;
    return head;
}
struct node *dl(struct node *head){
    struct node * sl;
    if(head == NULL){
        return NULL;
    }
    else if(head->next == NULL){
        free(head);
        return NULL;
    }
    
    else{
    struct node *temp = head;
    struct node *temp2 = head;
    while(temp->next != NULL){
        temp2 = temp;
        temp = temp->next;
    }
    free(temp);
    temp2->next = NULL;
    return head;
    }

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

int main(){
struct node *head = (struct node*)malloc(sizeof(struct node));
head->data = 12;
head->next = NULL;

insert_end(head,34);
insert_end(head,67);
insert_end(head,45);
head = dl(head);
display(head);



return 0;
}