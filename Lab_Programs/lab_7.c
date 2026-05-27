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
    struct node *temp=head,*prev;
    while(temp->next!=head){
        prev=temp;
        temp=temp->next;
    }
    free(temp);
    prev->next=head;
}




