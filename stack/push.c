#include<stdio.h>
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


void display(int arr[]){
    for(int i =  0; i < max; i++){
        printf("%d ",arr[i]);
    }
}
int main(){


push(1);
push(2);
push(3);
push(4);
push(4);
display(stack);

return 0;
}