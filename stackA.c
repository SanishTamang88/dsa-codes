// Implementation of stack using array.
#include<stdio.h>
#include<stdlib.h>
#define Max 10
int stack_arr[Max];
int top=-1;
void push(int data);
int pop();
int peek();
void display();
int isFull();
int isEmpty();

int main(){
    int data, choice;
    while(1){
printf("Press 1 for push:\n");
printf("Press 2 for pop:\n");
printf("Press 3 for peek:\n");
printf("Press 4 for display:\n");
printf("Press 5 for exit:\n");
printf("Enter your choice:\n");
scanf("%d",& choice);

    switch(choice){
        case 1:
        printf("Enter to add data:");
        scanf("%d",&data);
        push(data);
        break;

        case 2:
        printf("The poped element is %d\n",pop());
        break;

        case 3:
        printf("the top of stack is %d\n",peek());
        break;

        case 4:
        display();
        break;

        case 5:
        exit(1);
        break;

        default:
        printf("Wrong input\n:");
        break;
     }
   }
   return 0;
}
void push(int data){
    if (isFull()){
        printf("Stack overflow\n");
        return;
    }
    top=top+1;
    stack_arr[top]=data;
    return ;
}
int isFull(){
    if(top==Max-1){
        return 1;
    }
    return 0;
}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    return 0;
}

int pop(){
    int item;
    if( isEmpty()){
        printf("Stack underflow.");
        return ;
    }
    item=stack_arr[top];
    top=top-1;
    return item;
 }

 int peek(){
    if(isEmpty()){
        printf("Stack underflow:");
    }
    return stack_arr[top];
}
void display(){
    int i;
    if( isEmpty()){
        printf("Stack underflow:");
        return;

    }
    printf("Element of stack are:\n");
    for( i=top;i>=0;i--){
        printf("%d\t",stack_arr[i]);
    }
    
}


