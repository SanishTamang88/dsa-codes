//Stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
};
struct node* top = NULL;

void push(int data);
int pop();
int peek();
void display();
int isEmpty();
int main(){
    int data,choice;
    while(1){
        printf("Press 1 to push:\n");
         printf("Press 2 to pop:\n");
          printf("Press 3 to peek:\n");
           printf("Press 4 to display:\n");
            printf("Press 5 to exit:\n");
            printf("Enter your choice:");
            scanf("%d",&choice);

    switch (choice)
    {
    case 1:
          printf ("Enter to add data");
          scanf("%d",&data);
          push(data);
          break;

    case 2:
          printf("the poped element is %d",pop());
          break;

    case 3:
          printf("the top of stack is %d",peek());
          break;

    case 4:
          display();
          break;

    case 5:
          exit(1);    
    default:
          printf("Wrong input\n");
        break;
    }
 }
   return 0;
}

void push(int data){
     
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
     if (temp == NULL) {
        printf("Stack overflow:\n");
        return;
    }
    temp->info=data;
    temp->link=top;
    top=temp;
}

int pop(){
    int item;
    if( isEmpty()){
        printf("Stack underflow\n");
        return -1;
    }
    item=top->info;
    struct node*temp;
    temp=top;
    top=top->link;
    free(temp);
    return item;
}

int peek(){
    
    if(isEmpty()){
        printf("Stack underflow:\n");
        return -1;
    }
    return top->info;
}
int isEmpty(){
    if(top == NULL){
        return 1;
    }
    return 0;
}

void display(){
    if(isEmpty()){
        printf("stack underflow:\n");
        return;
}
struct node*temp=top;
while(temp != NULL){
    printf("%d",temp->info);
    temp=temp->link;
}
}





