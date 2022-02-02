#include<iostream>

using namespace std;

int shiftZero(int arr[] , int size){
  int nonZero = 0;
  for(int i = 0 ; i<size ; i++){
    if(arr[i] != 0 ){
      swap(arr[i] , arr[nonZero]);
      nonZero++;
    }
  }
}

int main(){
  int arr[5] = {1,0,2,0,3};
  shiftZero(arr , 5);
  return 0;
}