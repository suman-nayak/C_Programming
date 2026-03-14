#include <stdio.h>
// #include <stdlib.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// push
void push(char ch) {
    stack[++top] = ch;
}

// pop
char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}

// check matching pair
int isMatchingPair(char open, char close) {
    if (open == '(' && close == ')')
        return 1;
    if (open == '{' && close == '}')
        return 1;
    if (open == '[' && close == ']')
        return 1;
    return 0;
}

int main() {
    char expr[200];
    int i;

    printf("Enter expression: ");
    scanf(" %[^\n]", expr);

    for (i = 0; expr[i] != '\0'; i++) {

        // If opening bracket  push
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(expr[i]);
        }

        // If closing bracket  pop and check
        else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {

            if (top == -1) {
                printf("Invalid Expression\n");
                return 0;
            }

            char popped = pop();

            if (!isMatchingPair(popped, expr[i])) {
                printf("Invalid Expression\n");
                return 0;
            }
        }
    }

    // If stack empty  valid
    if (top == -1)
        printf("Valid Expression\n");
    else
        printf("Invalid Expression\n");

    return 0;
}