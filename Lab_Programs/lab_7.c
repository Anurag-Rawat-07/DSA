#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert_front(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    if(head==NULL){
        head=newnode;
        newnode->next=head;
        return;
    }
    struct node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    newnode->next=head;
    head=newnode;
    temp->next=newnode;
}

void insert_rear(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    if(head==NULL){
        head=newnode;
        newnode->next=head;
        return;
    }
    struct node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}

void insert_pos(int data,int pos){
    if(pos<1){
        printf("Inavlid position\n");
        return;
    }
    if(pos==1){
        insert_front(data);
        return;
    }
    if(head==NULL){
        printf("Insertion at this osition is not possible\n");
        return;
    }
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    struct node *temp=head;
    
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void delete_front(){
    if(head==NULL){
        printf("List is empty\n");
        return;
    }
    if(head->next==head){
        free(head);
        head=NULL;
        return;
    }
    struct node *temp=head;
    struct node *temp1=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    head=head->next;
    temp->next=head;
    free(temp1);
}

void delete_rear(){
    if(head==NULL){
        printf("List is empty\n");
        return;
    }
    if(head->next==head){
    free(head);
    head=NULL;
    return;
    }
    struct node *temp=head,*prev;
    while(temp->next!=head){
        prev=temp;
        temp=temp->next;
    }
    free(temp);
    prev->next=head;
}

void delete_pos(int pos){
    if(head==NULL){
        printf("List is empty\n");
        return;
    }

    if(pos<1){
        printf("Invalid position\n");
        return;
    }

    if(pos==1){
        delete_front();
        return;
    }

    struct node *temp=head,*prev=NULL;

    for(int i=1;i<pos;i++){
        prev=temp;
        temp=temp->next;

        if(temp==head){
            printf("Invalid position\n");
            return;
        }
    }

    prev->next=temp->next;
    free(temp);
}
void display(){
    if(head==NULL){
        printf("List is empty\n");
        return;
    }
    printf("The contents of the list are:");
    struct node *temp=head;
    do{
        printf("%d  ",temp->data);
        temp=temp->next;
    }while(temp!=head);
}

int main()
{
    int choice,data,pos;

    while(1)
    {
        printf("\n*** MENU ***\n");
        printf("1.Insert Front\n");
        printf("2.Insert Rear\n");
        printf("3.Insert Position\n");
        printf("4.Delete Front\n");
        printf("5.Delete Rear\n");
        printf("6.Delete Position\n");
        printf("7.Display\n");
        printf("8.Exit\n");

        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d",&data);
                insert_front(data);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d",&data);
                insert_rear(data);
                break;

            case 3:
                printf("Enter data: ");
                scanf("%d",&data);
                printf("Enter position: ");
                scanf("%d",&pos);
                insert_pos(data,pos);
                break;

            case 4:
                delete_front();
                break;

            case 5:
                delete_rear();
                break;

            case 6:
                printf("Enter position: ");
                scanf("%d",&pos);
                delete_pos(pos);
                break;

            case 7:
                display();
                break;

            case 8:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}


