// implementation of  linear queue using an array
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int front=-1, rare = -1;

void Enqueue(int);
int Dequeue();
int peek();
void display();
int isfull();
int isempty();

int main()
{
    int choice, data;

    while (1)
    {
        printf("Press 1. for Enqueue\n");
        printf("Press 2. for Dequeue\n");
        printf("Press 3. for Peek \n");
        printf("Press 4. for Display queue\n");
        printf("Press 5. for Exit\n\n");

        printf("Enter your choice\n: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            Enqueue(data);
            break;

        case 2:
            Dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("Exiting...\n");
            exit(1);

        default:
            printf("Invalid choice\n");
            break;
        }
    }
    
}

void Enqueue(int data)
{
    if (front==-1)
    {
        front =0;
    }

    if (isfull())
    {
        printf("queue is full \n");
        return;
    }

    rare += 1;
    queue[rare] = data;
}

int Dequeue()
{
    if (isempty())
    {
        printf("queue is empty\n");
        return 0;
    }

    return queue[front++];
}

int peek()
{
    if (isempty())
    {
        printf(" Queue khali xa");
        return 0;
    }
    return queue[front];
}

int isfull()
{
    if (rare == MAX - 1)
        return 1;

    else
        return 0;
}

int isempty()
{
    if (front == -1 || front == rare + 1)
        return 1;

    else
        return 0;
}

void display()
{
    int i;
    if (isempty())
    {
        printf("Queue is empty ");
        return;
    }
    printf("Displaying queue...\n");
    for (i = front; i <= rare; i++)
    {
        printf("%d\n", queue[i]);
    }
}
