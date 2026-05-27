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

void delete_front(){
   if(head==NULL){
      printf("List is empty\n");
      return;
   }
   printf("The node detected is:%d",head->data);
   struct node *temp=head;
   head=head->next;
   free(temp);
}

void delete_rear(){
   if(head==NULL){
      printf("List is empty \n");
      return;
   }
   struct node *temp=head;
   if(temp->next==NULL){
      free(temp);
      head=NULL;
      return;
   }
   while(temp->next->next!=NULL){
      temp=temp->next;
   }
   free(temp->next);
   temp->next=NULL;
}

void delete_pos(int pos){
   if(head==NULL){
      printf("List is empty\n");
      return;
   }
   struct node *temp=head;
   if(pos==1){
      head=head->next;
      free(temp);
   }
   for(int i=1;temp!=NULL && i<pos-1; i++){
      temp=temp->next;
   }
   if(temp==NULL){
      printf("Invalid Position\n");
      return;
   }
   struct node *current=temp->next;
   temp->next=current->next;
   free(current);
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
      printf("*******CHOOSE OPERATION******* \n1.Insert from front \n2.Insert from rear\n3.Insert in between\n4.Delet front\n5.Delete rear\n6.Delete positio\n7.Display\nEnter your choice:");
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
         delete_front();
         break;

         case 5:
         delete_rear();
         break;

         case 6:
         printf("Enter position:");
         scanf("%d",&pos);
         delete_pos(pos);
         break;

         case 7:
         display();
         break;

      }
   }
}

