#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int value) {
    if(top == MAX-1)
        printf("Overflow\n");
    else
        stack[++top] = value;
}

void pop() {
    if(top == -1)
        printf("Underflow\n");
    else
        printf("Popped %d\n", stack[top--]);
}

void display() {
    for(int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}