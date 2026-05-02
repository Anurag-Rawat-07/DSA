#include<stdio.h>
#include<ctype.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push(int x){
    if(top == MAX-1){
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = x;
}

int pop(){
    if(top == -1){
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

int main(){
    char exp[MAX];
    char *e;
    printf("Enter the postfix expression: ");
    scanf("%s", exp);
    e = exp;
    while(*e != '\0'){
        if(isdigit(*e)){
            push(*e - 48);
        }
        else{
            int op2 = pop();
            int op1 = pop();
            switch(*e){
                case '+': push(op1 + op2); break;
                case '-': push(op1 - op2); break;
                case '*': push(op1 * op2); break;
                case '/': push(op1 / op2); break;
            }
        }
        e++;
    }
    printf("Result: %d\n", pop());
    return 0;
}