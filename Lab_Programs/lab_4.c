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

void insert_from_front(int x){
    if(f==0 && r==-1){
        printf("Element inserted from front\n");
        r++;
        q[r]=x;
    }
    else if(f!=0){
        printf("Element inserted from front\n");
        f--;
        q[f]=x;
    }
    else{
        printf("Cannot insert from front\n");
    }
}

void delete_from_rear(){
    if(f>r){
        printf("Queue is empty\n");
    }
    else{
        printf("Deleted element from rear is %d\n",q[r]);
        r--;
    }
}

int main(){
    int choice,x;
    while(1){
        printf("\n***Queue Operations***\n");
        printf("1.Enqueue rear\n2.Dequeue front\n3.Enqueue front\n4.Dequeue rear\n5.Display\n6.Exit");
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
                printf("Enter the element to be enqueued: ");
                scanf("%d",&x);
                insert_from_front(x);
                break;
            case 4:
                delete_from_rear();
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0; 
}