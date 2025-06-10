#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int value)
{
    if (top >= SIZE - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = value;
}

void pop()
{
    if (top < 0)
    {
        printf("Stack underflow\n");
        return;
    }
    else
    {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void peep()
{
    if (top < 0)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

void change(int index, int value)
{
    if (top <= -1 || top - index + 1 < 0)
    {
        printf("Invalid Index !!\n");
    }
    else if (index < 1 || index > top + 1)
    {
        printf("Invalid Index !!\n");
    }
    else
    {
        stack[index - 1] = value;
        printf("Value changed at index %d\n", index);
    }
}

void display()
{
    if (top < 0)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    int choice;
    while (choice > 0)
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peep\n");
        printf("4. Change\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int value;
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        }
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
        {
            int index, value;
            printf("Enter index to change : ");
            scanf("%d", &index);
            printf("Enter new value: ");
            scanf("%d", &value);
            change(index, value);
            break;
        }
        case 5:
            display();
            break;
        case 6:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}