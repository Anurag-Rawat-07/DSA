/*
#Queue
a linear data structuretaht works on the principle of first in first out (FIFO)
*/  
#include <stdio.h>
#define MAX 5
int q[MAX],r=-1,f=0;

void enqueue(int x){
    if(r==MAX-1){
        printf("Queue is full\n");
    }
    else{
        r++;
        q[r]=x;
    }
}

void dequeue(){
    if(f>r){
        printf("Queue is empty\n");
    }
    else{
        printf("Deleted element is %d\n",q[f]);
        f++;
    }
}

void display(){
    if(f>r){
        printf("Queue is empty\n");
    }
    else{
        printf("Elements in the queue are: \n");
        for(int i=f;i<=r;i++){
            printf("%d ",q[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice,x;
    while(1){
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the element to be enqueued: ");
                scanf("%d",&x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0; 
}