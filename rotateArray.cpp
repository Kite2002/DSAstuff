#include<iostream>

using namespace std;

void rotateArray(int arr[] , int size , int k){
  int temp[size];
  for(int i = 0 ; i< size ; i++){
   temp[(i+k)%size] = arr[i];
  }
  for(int i = 0 ; i<size ; i++){
    arr[i] = temp[i];
  }
}

int main(){
  int arr[5] = {1,2,3,4,5};
  int k = 1; 
  rotateArray(arr , 5 , k);
  for(int i = 0; i < 5 ; i++){
    cout<<arr[i]<<" ";
  }
  return 0 ;
}