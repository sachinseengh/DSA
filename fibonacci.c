#include<stdio.h>


int fibo(int);


int main(){
	
	printf("Enter the no of terms that you want to print:\n");
	printf("Enter the no of terms that you want to print:\n");
	int n;
	scanf("%d",&n);
	printf("Enter the no of terms that you want to print:\n");
	
	int i;
	for(i=0;i<n;i++){
		int a =fibo(i);
		printf("%d\t",a);
	}
	return 0;
}

int fibo(int j){
	if(j==0){
		return 0;
	}else if(j == 1){
		return 1;
	}else{
	
	return fibo(j-1)+fibo(j-2);
}
}
