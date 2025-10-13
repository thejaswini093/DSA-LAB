#include <stdio.h>
#include <string.h>

#define MAX 100


char stack[MAX];
int top = -1;


void push(char c) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = c;
}


char pop() {
    if (top == -1)
        return '\0';
    else
        return stack[top--];
}


int isBalanced(char exp[]) {
    for (int i = 0; exp[i] != '\0'; i++) {
        char c = exp[i];

        if (c == '(' || c == '{' || c == '[')
            push(c);

        else if (c == ')' || c == '}' || c == ']') {
            if (top == -1)
                return 0;

            char temp = pop();

            if ((c == ')' && temp != '(') ||
                (c == '}' && temp != '{') ||
                (c == ']' && temp != '['))
                return 0;
        }
    }


    return (top == -1);
}

int main() {
    char exp[100];

    printf("Enter an expression: ");
    scanf("%s", exp);

    if (isBalanced(exp))
        printf("Balanced Parentheses\n");
    else
        printf("Not Balanced\n");

    return 0;
}
