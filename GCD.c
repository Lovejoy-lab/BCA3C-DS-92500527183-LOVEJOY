#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    stack[++top] = value;
}

int pop() {
    return stack[top--];
}

int main() {
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    push(a);
    push(b);

    while (1) {
        b = pop();
        a = pop();

        if (b == 0) {
            push(a);
            break;
        }

        temp = a % b;
        push(b);
        push(temp);
    }

    printf("GCD is %d\n", pop());

    return 0;
}
