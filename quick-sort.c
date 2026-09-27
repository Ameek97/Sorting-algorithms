#include<stdio.h>

void quickSort( int arr[], int s, int e ){

  if( s==e || s>e){ return;}
  
  int val=arr[s];
  int l=s+1, r=e;

  while( l<=r ){

      while( l<=e ){
        if(arr[l]>val){break;} 
        l++;} 

      while( r>=s ){
        if(arr[r]<=val){break;}
        r--;}
        
   if(l<r){ 
     int temp = arr[r];
     arr[r] = arr[l];
     arr[l] = temp;}

  }


     int temp = arr[r];
     arr[r] = arr[s];
     arr[s] = temp;



   quickSort(arr, s,r-1);
   quickSort(arr,r+1,e);


  }


 
 void printarr( int arr[], int n){
      for( int i=0; i<n; i++){ 
           printf("%d ", arr[i]);}
 }


int main(){

  int arr[] = {4, 16 , 9, -1, 3};
  int n = 5;



   
  
       for( int i=0; i<n; i++){ 
           printf("%d ", arr[i]);}

      quickSort( arr, 0, n-1 );

      printf("\n");     
     
      for( int i=0; i<n; i++){ 
          printf("%d ", arr[i]);}



            return 0;
}