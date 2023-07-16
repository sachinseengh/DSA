//toh
#include<stdio.h>
#include<conio.h>
void TOH(int,char,char,char);

int main(){
	
	int n=3;
	
	TOH(n,'o','D','I');
	
	getch();
	return 0;
}

void TOH(int n,char A,char B,char C){
	if(n>0){
		TOH(n-1,A,B,C);
		printf("move disk  %d from %c to %c\n",n,A,B);
		TOH(n-1,C,B,A);
	}
}
