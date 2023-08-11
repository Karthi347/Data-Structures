#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

int is_empty() {
    return (top == -1);
}

int is_full() {
    return (top == MAX_SIZE - 1);
}

void push(int data) {
    if (is_full()) {
        printf("Stack Overflow: Cannot push element, the stack is full.\n");
    } else {
        stack[++top] = data;
        printf("Pushed %d onto the stack.\n", data);
    }
}

void pop() {
    if (is_empty()) {
        printf("Stack Underflow: Cannot pop element, the stack is empty.\n");
    } else {
        int data = stack[top--];
        printf("Popped %d from the stack.\n", data);
    }
}

void peek() {
    if (is_empty()) {
        printf("Stack is empty, cannot peek.\n");
    } else {
        printf("Top element of the stack: %d\n", stack[top]);
    }
}

int main() {
    int choice, data;

    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data to push: ");
                scanf("%d", &data);
                push(data);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

