#include<stdio.h>


int main(){

int arr[] ={2,4,5,8,1,9};



for(int i=0;i<6;i++){

    for(int j=i+1;j<6;j++){
        if(arr[i]>arr[j]){
           int temp = arr[i];
           arr[i]=arr[j];
           arr[j]=temp; 
        }
    }
}
printf("your sorted array's Element are:\n");
for(int i=0;i<6;i++){
    
        printf("%d\t",arr[i]);

    }

    return 0;
}