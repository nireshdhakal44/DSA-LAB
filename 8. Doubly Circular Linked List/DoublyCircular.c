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
void insert();
void deleted();
void display();
	Node *first, *last, *temp, *Newnode;
int main()
{
	int ele, choice;
	do {
	printf("ENTER \n1. To Insert\n2. To Delete\n3. To Display\n4. To Exit\n");
	printf("Enter the choice\n");
	scanf("%d", &choice);
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				deleted();
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
void insert(){
	int y;
	Newnode=(Node*)malloc(sizeof(Node));
	printf("enter the data of the node");
	scanf("%d", &y);
	Newnode->info=y; 
	Newnode->next=first;
	Newnode->prev=last;
	if(first==NULL){
		first=Newnode;
		last=Newnode;
		Newnode->next=first;
		Newnode->prev=last;
	}
	else{
		last->next=Newnode;
		Newnode->prev=last;
		last=Newnode;
		last->next=first;
	}
}
void deleted(){
	if(first==NULL){
		printf("Nothing to delete.Linked list is empty\n");
	}
	else if(first==last){
		printf("The node %x with data %d is deleted\n", first, first->info);
		first=NULL;
		last=NULL;
	}
	else{
			printf("The node %x with data %d is deleted\n", last, last->info);
			temp=last;
			last=last->prev;
			last->next=first;
			free(temp);
	}
}
void display(){
	if(first==NULL)
	{
		printf("linked list is empty\n");
	}
	else{
		temp=first;
		do{
			
			printf("data of node %x is %d\n", temp, temp->info);
			temp=temp->next;
		
		}
		while(temp!=first);
	}
}