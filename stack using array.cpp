#include<stdio.h>
#include<conio.h>
#define SIZE 10


void push(int);
void pop();
void display();

int stack[SIZE],top = -1;

int main(){
	int value,choice;
//	clrscr();
	while(1){
		printf("\n\n*************Menu**********\n");
		printf("1. Push \n 2. Pop \n3.Display\n4.Exit");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:printf("Enter the value to be insert:");
			       scanf("%d",&value);
			       push(value);
			       break;
			case 2:pop();
			       break;
		    case 3:display();
		           break;
//		    case 4:exit();
		    
		    default:
		    	printf("\n Wrong Selection!!! Try again");
		}
	}
	getch();
	return 0;
}
void push(int value){
	if(top == SIZE-1){
		printf("\n Stack is Full !!!  Insertion not possible");
		
	}else{
		top++;
		stack[top]=value;
		printf("\n Insertion Success !!!");
	}
}
void pop(){
	if(top == -1)
	   printf("\n Stack is empty !!! Deletion is not possible!!!");
	else{
		printf("\n Deleted :%d",stack[top]);
		top--;
	}
}
void display(){
	if(top == -1){
		printf("\nStack is empty");
	}
	else{
		int i;
		printf("\nStack Elements are:\n");
		for(i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	}
}
