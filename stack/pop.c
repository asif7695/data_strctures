#include<stdio.h>
#include<stdlib.h>
#define max 4

int stack[max];
int top = -1;

void push(int data){
    if(top == max-1){
    printf("stack is full ");
    return;
    }
    top += 1;
    stack[top] = data;
}
int pop(){
    if(top == -1){
        printf("stack is empty ");
        exit(1);
    }
    int value;
    value = stack[top];
    top -= 1;
    return value;
}


void display(int arr[]){
    if(top == -1){
        printf("stack is empty ");
        return;
    }
    for(int i =  top; i > -1 ; i-- ){
        printf("%d ",arr[i]);
    }
}
int main(){
int data;

push(1);
push(2);
push(3);
push(4);
data = pop();

display(stack);

return 0;
}