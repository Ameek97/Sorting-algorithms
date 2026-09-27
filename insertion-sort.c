#include<stdio.h>

void printarr( int arr[], int size){
    for( int i=0; i<size; i++){
        printf("%d ", arr[i]);    }
}


void insertionSort( int arr[], int n ){

  for( int i=0; i<n; i++){

    int j=i;
    while( j>0 && arr[j-1]>arr[j]){
        
        int temp = arr[j];
        arr[j]= arr[j-1];
        arr[j-1]=temp;
        j--; } }
}



int main(){

  int arr[] = {42, 7, 19, 3, 56, 12, 89, 1, 34, 25, 68, 5, 73, 16, 9};
  int n = 15;


  printarr(arr,n);
  
  insertionSort( arr, n );
   
  printf("\n");     
  printarr(arr,n);


     

            return 0;
}