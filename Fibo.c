#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    printf("How many terms you want to print\n");
    int n;
    // scanf("%d",&n);
    n=10;
    for(int i=0;i<n;i++){
        printf("%d\t",a);
       int c=a+b;
        a=b;
        b=c;
    }

    return 0;
}