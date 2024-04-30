#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
struct queue {
int rear;
int front;
int items[SIZE];
};
typedef struct queue q;
void enqueue(q*);
void dequeue(q*);
void display(q*);
int main() 
{
	int ch;
	q *x;
//	x->front=-1;
//	x->rear=-1;
	printf("Menu Program\n");
	printf("1: To insert\n2: To delete \n3: To display\n");
	do
	{
		printf("Enter the choice\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				enqueue(x);
				break;
			case 2:
				dequeue(x);
				break;
			case 3:
				display(x);
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Enter the valid choice");
		}
	
			
	}
		while(ch < 5);
		return 0;
	
}
void enqueue(q *x){
	int ele;
	printf("Enter the items to be inserted \n");
	scanf("%d", &ele);
	if(x->rear == SIZE-1) 
	{
		printf("The queue is full\n");
	}
	else
	 {
	x->rear =x->rear+1;
	x->items[x->rear] = ele;
	}
	
}
void dequeue(q *x) {
	int a;
	if(x->rear<0)
	{
		printf("The queue is empty\n");
	}
	else 
	{
		a = x->items[x->front];
		printf("Deleted item is  %d: ", a);
		x->front =x->front+1;
	}
}
void display(q *x){
	int i;
	if(x->front<0)
	{
		printf("queue is empty. Nothing to display \n");
		
	}
	else
	{
		printf("Items in the queue are: \n");
		for(i=x->front; i<x->rear; i++)
		{
			printf("%d\n", x->items[i]);
		}
	}
	
}




