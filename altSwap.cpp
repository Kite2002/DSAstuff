#include<iostream>
using namespace std;

void swapAlt(int arr[]){
  for (int  i = 0; i < 10; i = i+2)
  {
    if(i+1 < 10){
      swap(arr[i] , arr[i+1]);
    }
  }
  
}

int main(){
  int arr[10];
  for(int i = 0; i< 10 ; i++){
    cin>>arr[i];
  }
  swapAlt(arr);
  for (int  i = 0; i < 10; i++)
  {
    cout<<arr[i]<<" ";
  }
  
}