#include<stdio.h>


void printarr( int arr[], int size){
    for( int i=0; i<size; i++){
        printf("%d ", arr[i]);    }
}



void mergeSort( int arr[], int s, int e){

    int mid = (s+e)/2;

   if( s==e){ return;}

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

   // merge
   int size = e-s+1;
   int temp[size];
 
   int k =0; 
   int l=s, r = mid+1;
   
  while( l<=mid && r<=e){
      if( arr[l]<= arr[r] ){ temp[k] = arr[l];
                             l++;}

      else{ temp[k]=arr[r];
            r++;}
  
      k++;}
      
      
  while( l<=mid ){ temp[k]= arr[l];
                   k++;
                   l++;}

  while( r<=e ){ temp[k]= arr[r];
                   k++;
                   r++;}

  k=0;
  for( int i=s; i<=e; i++){
       arr[i]=temp[k];
       k++;}


}



int main(){

  int arr[] = {4, 16 , 9, -1, 3};
  int n = 5;



   
  
  printarr(arr,n);

      mergeSort( arr, 0, n-1 );

      printf("\n");     
     
      for( int i=0; i<n; i++){ 
          printf("%d ", arr[i]);}



            return 0;
}