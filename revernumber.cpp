#include<stdio.h>
int gcd(int,int);
int main(){


int a=2;
int b=4;

int g=gcd(a,b);
printf("the gcd is %d",g);
	
	return 0;
}
int gcd(int x,int y){
	if(y==0 ){
		return x;
	}else{
		return gcd(y,x%y);
	}
}
