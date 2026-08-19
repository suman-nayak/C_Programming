#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' ||
            ch == '/' || ch == '^');
}

int precedence(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;

    return 0;
}

int pushChar(char stack[], int top, char ch)
{
    stack[++top] = ch;
    return top;
}

int popChar(char stack[], int top, char *ch)
{
    *ch = stack[top];
    return top - 1;
}
void infixToPostfix(char infix[], char postfix[])
{
    char stack[MAX];
    int top = -1;
    int i, j = 0;
    char ch;

    for (i = 0; infix[i] != '\0'; i++)
    {
        ch = infix[i];
        if (isalnum(ch))
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            top = pushChar(stack, top, ch);
        }
        else if (ch == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                top = popChar(stack, top, &ch);
                postfix[j++] = ch;
            }

            if (top != -1)
                top--;   // Remove '('
        }

        // If operator
        else if (isOperator(ch))
        {
            while (top != -1 &&
                   stack[top] != '(' &&
                   precedence(stack[top]) >= precedence(ch))
            {
                top = popChar(stack, top, &ch);
                postfix[j++] = ch;
            }

            top = pushChar(stack, top, ch);
        }
    }
    while (top != -1)
    {
        top = popChar(stack, top, &ch);
        postfix[j++] = ch;
    }

    postfix[j] = '\0';
}
void postfixToInfix(char postfix[], char infix[])
{
    char stack[MAX][MAX];
    int top = -1;
    int i;
    char ch;
    char op1[MAX], op2[MAX], temp[MAX];

    for (i = 0; postfix[i] != '\0'; i++)
    {
        ch = postfix[i];

        // If operand
        if (isalnum(ch))
        {
            top++;
            stack[top][0] = ch;
            stack[top][1] = '\0';
        }

        // If operator
        else if (isOperator(ch))
        {
            strcpy(op2, stack[top]);
            top--;

            strcpy(op1, stack[top]);
            top--;

            sprintf(temp, "(%s%c%s)", op1, ch, op2);

            top++;
            strcpy(stack[top], temp);
        }
    }

    strcpy(infix, stack[top]);
}

int main()
{
    int choice;
    char expression[MAX];
    char result[MAX];

    printf("===== Expression Conversion =====\n");
    printf("1. Infix to Postfix\n");
    printf("2. Postfix to Infix\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter expression: ");
    scanf("%s", expression);

    if (choice == 1)
    {
        infixToPostfix(expression, result);

        printf("\nInfix Expression  : %s", expression);
        printf("\nPostfix Expression: %s\n", result);
    }
    else if (choice == 2)
    {
        postfixToInfix(expression, result);

        printf("\nPostfix Expression: %s", expression);
        printf("\nInfix Expression  : %s\n", result);
    }
    else
    {
        printf("\nInvalid choice!\n");
    }

    return 0;
}