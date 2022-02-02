#include<iostream>

using namespace std;

int reverseArray(int arr[] , int size){
  for(int i = 0, j = size-1 ; i<=j;i++ ,j--){
    swap(arr[i] ,arr[j]);
  }
}

int main(){
  int arr[5] = {1,2,3,4,5};
  int arr2[4] = {1,2,3,4};
  reverseArray(arr , 5);
  reverseArray(arr2 , 4);
  for(int i = 0 ; i<4;i++){
    cout<<arr2[i]<<" ";
  }
  return 0;
}