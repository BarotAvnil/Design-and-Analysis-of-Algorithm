#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear >= SIZE - 1) {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1) {
        front = 0; 
    }
    queue[++rear] = value;
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
        return;
    }
    printf("Dequeued element: %d\n", queue[front]);
    front++;
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int value;
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            }
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}



