#include<stdio.h>


int main(){
    int arr[]={2,4,85,96,45,24,52,5};


    int middle,s;
    printf("Enter the element you want to search\n");
    scanf("%d",&s);

    middle = (0+8)/2;
    // printf("%d",middle);



    //first sorting the array

    for(int i=0;i<8;i++){

    for(int j=i+1;j<8;j++){
        if(arr[i]>arr[j]){
           int temp = arr[i];
           arr[i]=arr[j];
           arr[j]=temp; 
        }
    }
}


if(s>arr[middle]){
    for(int i=middle;i<8;i++){
        if(s==arr[i]){
            printf("\nElement is present:\n");
        }
    }
    
}else if(s<arr[middle] ){
    for(int i=0;i<middle;i++){
        if(s==arr[i]){
            printf("\nElement is present:\n");
        }
  
    }
}else if(s == arr[middle]){
    printf("\nElement is present at middle\n");
    
}else{
    printf("\nElement not present");
}









    return 0;

}