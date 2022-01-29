#include<iostream>
using namespace std;

int bubbleSort(int arr[] ,int n){
  int count = 0;
  for(int i= 0 ; i<n ; i++){
    count = 0;
    for (int j = 0; j < n-i; j++)
    {
      if(arr[j] > arr[j+1]){
        swap(arr[j] , arr[j+1]);
        count++;
      }
    }
    if(count == 0){
      break;
    }
    
  }
}

int main(){
  int arr[5] = {12 , 99 ,21 , 1, 6};
  bubbleSort(arr, 5);
  for(int i = 0 ; i<5 ; i++)
    cout<<arr[i]<< " ";
  return 0;
}