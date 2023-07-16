//book ko ho yo
#include<stdio.h>
#include<conio.h>
int stack[100],i,j,choice=0,top=-1,n;
void push();
void pop();
void display();
int  main(){
	
	printf("Enter your number of elements in the stack");
	scanf("%d",&n);
	printf("**********Stack operation using array**********");
	printf("\n----------------------\n");
	while(choice != 4){
		printf("Chose one from the velow options..\n");
		printf("\n1.push\n2.pop\nn3.show\n4.exit");
		printf("\n Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
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
				printf("Exiting....");
				break;
			default:
				printf("plese Enter valid choice");
				
		}
		
	}
	getch();
	return 0;
}


void push(){
	int val;
	if(top == n){
		printf("\nOverflow");
	}else{
		printf("Enter the value");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}
void pop(){
	if(top==-1){
		printf("Underflow");
	}else{
		top=top-1;
	}
}
void display(){
	for(i=top;i>=0;i--){
		printf("%d\n",stack[i]);
	}
	if(top == -1){
		printf("Stack is empty");
	}
}

