#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int intStack[MAX];
char charStack[MAX];

int topInt = -1;
int topChar = -1;

void pushInt(int data){
    if(topInt == MAX-1){
        printf("Stack Overflow\n");
    }
    else{
        topInt++;
        intStack[topInt] = data;
        printf("%d pushed to stack\n", data);
    }
}

void pushChar(char data){
    if(topChar == MAX-1){
        printf("Stack Overflow\n");
    }
    else{
        topChar++;
        charStack[topChar] = data;
        printf("%c pushed to stack\n", data);
    }
}

void popInt(){
    if(topInt == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d popped from stack\n", intStack[topInt]);
        topInt--;
    }
}

void popChar(){
    if(topChar == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("%c popped from stack\n", charStack[topChar]);
        topChar--;
    }
}

void displayIntStack(){
    if(topInt == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Integer Stack: ");
        for(int i=topInt; i>=0; i--){
            printf("%d ", intStack[i]);
        }
        printf("\n");
    }
}

void displayCharStack(){
    if(topChar == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Character Stack: ");
        for(int i=topChar; i>=0; i--){
            printf("%c ", charStack[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice, data;
    char charData;
    while(1){
        printf("1. Push Integer\n2. Pop Integer\n3. Display Integer Stack\n4. Push Character\n5. Pop Character\n6. Display Character Stack\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter integer to push: ");
                scanf("%d", &data);
                pushInt(data);
                break;
            case 2:
                popInt();
                break;
            case 3:
                displayIntStack();
                break;
            case 4:
                printf("Enter character to push: ");
                scanf(" %c", &charData);
                pushChar(charData);
                break;
            case 5:
                popChar();
                break;
            case 6:
                displayCharStack();
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

}