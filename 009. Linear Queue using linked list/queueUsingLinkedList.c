#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	int info;
	struct node *next;
	struct node *prev;
};
typedef struct node Node;
void enqueue();
void dequeue();
void display();
	Node *front, *rear, *temp, *Newnode;
void main()
{
	int ele, choice;
	do {
	printf("ENTER \n1. To Enqueue\n2. To Dequeue\n3. To Display\n4. To Exit\n");
	printf("Enter the choice\n");
	scanf("%d", &choice);
		switch(choice){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
			defult:
				printf("invalid choice");
				break;
	}
	}while(choice!=5);
}
void enqueue(){
	int y;
	Newnode=(Node*)malloc(sizeof(Node));
	printf("enter the data of the node");
	scanf("%d", &y);
	Newnode->info=y; 
	Newnode->next=NULL;
	Newnode->prev=NULL;
	if(front==NULL){
		front=Newnode;
		rear=Newnode;
	}
	else{
		rear->next=Newnode;
		Newnode->prev=rear;
		rear=Newnode;
	}
}
void dequeue(){
	if(front==NULL){
		printf("Nothing to delete.Queue is empty\n");
	}
	else if(front==rear){
		printf("The node %x with data %d is deleted\n", front, front->info);
		front=NULL;
		rear=NULL;
	}
	else{
			printf("The node %x with data %d is deleted\n", front, front->info);
			temp=front;
			front=front->next;
			free(temp);
			
	}
}
void display(){
	if(front==NULL)
	{
		printf("Queue is empty\n");
	}
	else{
		temp=front;
		do{
			
			printf("data of node %x is %d\n", temp, temp->info);
			temp=temp->next;
		
		}
		while(temp!=NULL);
	}
}