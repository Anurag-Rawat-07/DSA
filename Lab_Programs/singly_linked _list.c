#include<stdio.h>

struct node{
    int data;
    struct node *next; 
};

struct node *head=NULL;

void insert_front(int data){
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
   newnode->next=NULL;
   head=newnode;
}

void insert_last(int data){
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
   newnode->next=NULL;
   if(head==NULL){
      head=newnode;
      return;
   }
   struct node *temp;
   temp=head;
   while(temp->next!=NULL){
      temp=temp->next;
   }
   temp->next=newnode;
}

void insert_pos(int data, int pos){
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
   if(pos==-1){
      newnode->next=head;
      head=newnode;
      return;
   }
   struct node *temp = head;
   for(int i=1; temp!=NULL && i<pos-1; i++){
      temp=temp->next;
      if(temp==NULL){
         printf("Invalid postion \n");
         return;
      }
      newnode->next=temp->next;
      temp->next=newnode;
   }
}

