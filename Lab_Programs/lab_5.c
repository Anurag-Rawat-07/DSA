#include<stdio.h>
#define MAX 5

int q[MAX],r=-1,f=0,count=0;

void enqueue(int value){
    if(count==MAX){
        printf("Queue is full \n");
        return ;
    }
    printf("Element inseted successfully \n");
    r=(r+1)%MAX;
    q[r]=value;
    count++;

}

void dequeue(){
    if(count==0){
        printf("Empyt queue\n");
        return ;
    }
    printf("Deleted element:%d \n",q[f]);
    f=(f+1)%MAX;
    count--;
}

void display(){

    if(count==0){
        printf("Empty queue \n");
        return;
    }

    int temp = f;

    printf("The elements of Queue are: ");

    for(int i=0; i<count; i++){
        printf("%d ", q[temp]);
        temp = (temp + 1) % MAX;
    }

    printf("\n");
}

int main(){
    int choice,x;
    while(1==1){
        printf("\n ***Enter Operation***\n1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter the elemet to insert:");
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
        }
    }

}