#include<stdio.h>

int gcd(int a, int b);
int main(){
	int n1,n2,gcd2;
	printf("Enter any two number:");
	scanf("%d%d",&n1,&n2);
	
	gcd2=gcd(n1,n2);
	printf("Gcd of %d and %d = %d ",n1,n2,(n1*n2)/gcd2);
	return 0;
}
int gcd(int a,int b){
	if(b == 0){
		return a;
	}else{
		return gcd(b,a%b);

	}
}
