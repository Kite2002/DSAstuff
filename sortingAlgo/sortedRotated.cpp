#include<iostream>

using namespace std;

bool rotatedSorted(int arr[],int n){
  int count = 0;
  for (int i = 1; i < n; i++)
  {
    if(arr[i-1]>arr[i]){
      count++;
    }
  }
  if(count == 1){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int arr[5] = {
    5,1,2,3,4
  };
  cout<<rotatedSorted(arr , 5);
}