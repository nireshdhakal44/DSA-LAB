#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
void isempty();
int isfull();
void push();
void pop();
void display();
int item[SIZE],i, top=-1,choice=0;
int main()
{
    while(choice!=6)
    {    
    printf("Enter your choice:\n 1. To insert item in the Stack \n 2. To Delete item from the Stack \n 3. To display items in the Stack \n 4. To check if the Stack is Full \n 5. To check is the Stack is empty\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        isfull();
        break;
    case 5:
        isempty();
        break;
    default: 
        printf("Please Enter the Valid Choice: ");  
        exit(0);
    }
    };
return 0;
}
void isempty(){
    if(top<0){
        printf("Stack is Empty \n");
    }
}
int isfull(){
    if(top==SIZE-1)
    {
        printf("The stack is full\n");
    }
    else{
        printf("The stack is not full\n");
    }

}
void push(){
    int ele;
    if((top+1)<=SIZE-1)
    {
    printf("Enter the item to be inserted: ");
    scanf("%d", &ele);
    top=top+1;
    item[top]=ele;
    }
    else
    {
        printf("The stack is Full.\n No more items can be added \n");
    }
    }
void pop(){
    if(top>-1)
    {
    printf("The deleted item is %d\n", item[top]);
    top=top-1;
    }
    else{
        printf("The stack is empty \n");
            }

}
void display(){
    int i=0;
    printf("Items in the stack are: \n");
    for(i=top;i>=0;i--)
    {
        printf("%d \n", item[i]);
    }


}