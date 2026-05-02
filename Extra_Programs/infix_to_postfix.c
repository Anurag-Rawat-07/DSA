#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX 20

char stack[MAX];
int top = -1;

void push(char x){
    stack[++top] = x;
}

char pop(){
    return (top == -1) ? -1 : stack[top--];
}

int priority(char x){
    if(x == '+' || x == '-') return 1;
    if(x == '*' || x == '/') return 2;
    if(x == '^') return 3;
    return 0;
}

int main(){
    char EXP[MAX], *e, y;

    printf("Enter the infix expression: ");
    scanf("%s", EXP);

    e = EXP;

    while(*e != '\0'){
        if(isalnum(*e)){
            printf("%c", *e);
        }
        else if(*e == '('){
            push(*e);
        }
        else if(*e == ')'){
            while((y = pop()) != '('){
                printf("%c", y);
            }
        }
        else{
            while(top != -1 && priority(stack[top]) >= priority(*e)){
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }

    while(top != -1){
        printf("%c", pop());
    }

    return 0;
}