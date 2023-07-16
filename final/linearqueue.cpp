//Program to implement queue using array 
#include <stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot enqueue item.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = item;
        printf("Enqueued item: %d\n", item);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty. Cannot dequeue item.\n");
    } else {
        int item = queue[front];
        front++;
        printf("Dequeued item: %d\n", item);
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue contents:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

int main() {
    int choice, item;

    while (1) {
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the item to enqueue: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("\n");
    }
}
