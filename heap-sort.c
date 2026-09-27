#include<stdio.h>


void printarr( int arr[], int size){
    for( int i=0; i<size; i++){
        printf("%d ", arr[i]);    }
}



void heapify( int i, int arr[], int n){

  if( (2*i)+1 >=n ){return;}

  int index=-1;  
  
  if( 2*i+1 < n && arr[2*i+1] > arr[i]  ){ index = 2*i+1;}
  if(2*i+2 < n  && arr[2*i+2] > arr[i] && arr[2*i+2]>arr[2*i+1] ){ index = 2*i+2;}

  if( index == -1){ return ;}

 if( index!=-1){ 
  int temp = arr[index];
  arr[index] = arr[i];
  arr[i]=temp; 

  heapify(index, arr, n);}

}


void buildHeap(int arr[], int n){

    for( int i=n-1; i>=0; i--){
         heapify(i,arr,n); }   }



void heapSort(int arr[], int n){

    buildHeap(arr,n);

    int size = n;
    while( size > 1 ){

        int temp = arr[0];
        arr[0]=arr[size-1];
        arr[size-1]=temp;

        size--;
        heapify( 0, arr, size);
    }

   

}


int main(){
    
    
    int arr[] = {42, 7, 19, 3, 56, 12, 89, 1, 34, 25, 68, 5, 73, 16, 9};


    
    printarr(arr, 15);
    heapSort(arr, 15);

    printf("\n");
    printarr(arr, 15);
    
    
    
    
    
    return 0;}