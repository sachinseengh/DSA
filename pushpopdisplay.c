#include<stdio.h>

void push();
void pop();
void display();
int top=-1;
int arr[10];
int main(){
	
	int choice;
	printf("Enter 1 for push,0 for pop and 2 for display:\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			push();
			break;
		case 0:
			pop();
			break;
		case 2:
			display();
			break;
		default:
			printf("Wrong choice:\n");
	}
	
	
	return 0;
}
void push(){
	int val;
	if(top==10){
		printf("overflow\n");
	}else{
		printf("Enter the elements:\n");
		scanf("%d",&val);
		top++;
		arr[top]=val;
	}
}
void pop(){
	if(top==-1){
		printf("\nUnderflow");
	}else{
		top--;
	}
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("%d",arr[i]);
	}
	if(top==-1){
		printf("Stack is empty\n");
	}
}
