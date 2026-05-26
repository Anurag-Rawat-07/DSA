#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next; 
};

struct node *head=NULL;

void insert_front(int data){
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
   newnode->next=head;
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
   if(pos==1){
      newnode->next=head;
      head=newnode;
      return;
   }
   struct node *temp = head;
   for(int i=1; temp!=NULL && i<pos-1; i++){
      temp=temp->next;
   }
      if(temp==NULL){
         printf("Invalid postion \n");
         return;
      }
      newnode->next=temp->next;
      temp->next=newnode;
   
}
void display(){
   if(head==NULL){
      printf("Empty list\n");
      return;
   }
   struct node *temp=head;
   printf("The elements of list are:");
   while(temp!=NULL){
      printf("%d  ",temp->data);
      temp=temp->next;
   }
}

int main(){
   int choice,data,pos;
   while(1==1){
      printf("*******CHOOSE OPERATION******* \n1.Insert from front \n2.Insert from rear\n3.Insert in between\n4.Display \nEnter your choice:");
      scanf("%d",&choice);
      switch(choice){
         case 1:
         printf("Enter the number to insert:");
         scanf("%d",&data);
         insert_front(data);
         break;

         case 2:
         printf("Enter the number to insert:");
         scanf("%d",&data);
         insert_last(data);
         break;

         case 3:
         printf("Enter the number to insert:");
         scanf("%d",&data);
         printf("Enter position:");
         scanf("%d",&pos);
         insert_pos(data,pos);
         break;

         case 4:
         display();
         break;

      }
   }
}

