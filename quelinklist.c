// implementation of  linear queue using Linkedlist
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *front = NULL;
struct node *rear = NULL;

int IsEmpty();
int Enqueue(int data);
void Dequeue();
void peek();
void display();

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

int IsEmpty()
{
    if (front == NULL)
        return 1;
    else
        return 0;
}

int Enqueue(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->info = data;
    temp->link = NULL;

    if (IsEmpty()){
    front = rear = temp;
    }
    else
    {
        rear->link = temp;
        rear = temp;
    }
}

void Dequeue()
{
    if (IsEmpty())
    {
        printf("queue is empty\n");
        return;
    }
    struct node *p;
    p = front->link;
    printf("Dequed element  =%d\n", front->info);
    front = p;

    if (front == NULL)
    {
        rear = NULL;
    }
}

void peek()
{
    if (IsEmpty())
    {
        printf("queue is empty\n");
        return;
    }
    printf("Front element = %d\n", front->info);
}

void display()
{
    if (IsEmpty())
    {
        printf(" queue is empty\n");
        return;
    }

    struct node *p;
    p = front;
    while (p != NULL)
    {
        printf("%d\t", p->info);
        p = p->link;
    }
}