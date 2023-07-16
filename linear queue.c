#include<stdio.h>

#include<conio.h>
#define SIZE 5

int front = -1 ;
int rear = -1 ;
int q[SIZE];
void insert();
void del();
void display();

int main(){
	int choice;
//	clrscr();
	do{
//		clrscr();
		printf("\t Menu");
		printf("\n 1.Insert");
		printf("\n 2.Delete");
		printf("\n 3.Display");
		printf("\n 4. Exit");
		
		printf("Enter your choice:");
		scanf("%d",&choice);
	
	
	
	
	switch(choice){
		case 1:
			   insert();
			   display();
			   getch();
			   break;
		case 2: 
		      del();
		      display();
		      getch();
		      break;
		case 3:
			  display();
			  getch();
			  break;
		case 4:
			  printf("End of program........!!!");
			  getch();
//			  exit(0);
			  	}
}while(choice != 4);
getch();
return 0;
}

 void insert(){
 	int no;
 	printf("Enter No:");
 	scanf("%d",&no);
 	
 	
 	if(rear<SIZE-1){
 		q[++rear]=no;
 		if(front == -1)
 		front = 0;
	 }
	 else{
	 	printf("\n Queue overflow..");
	 }
 }
 void del(){
 	if(front == -1){
 		printf("\n Queue underflow");
 		return;
	 }
	 else{
	 	printf("\n Deleted item : %d\n",q[front]);
	 }
	 if(front == rear){
	 	front=-1;
	 	rear = -1;
	 }
	 else{
	 	front = front + 1;
	 }
 }
 void display(){
 	int i;
 	if(front == -1){
 		printf("\n Queue is empty....");
 		return;
	 }
	 for(i=front;i<rear;i++){
	 	printf("\t%d",q[i]);
	 }
 }

     
