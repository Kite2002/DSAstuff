#include<iostream>

using namespace std;

bool isPossible(int arr[] , int size , int m , int mid){

  int add = 0;
  int j =1;
  for(int i= 0 ; i<size ; i++){
      if((add+arr[i]) <= mid ){
        add = add+ arr[i];
      }else{
        add = arr[i];
        j++;
          if(j > m || arr[i] > mid)
            return false;
      }
    }
    return true;

  
}

int allocate(int arr[] ,int size ,int m){
  int start = 0;
  int end = 0;
  for(int i = 0 ; i < size ; i++){
    end = end+arr[i];
  }
  int ans =  -1;
  int mid = start + (end-start)/2;
  while(start < end){
    if(isPossible(arr , size , m , mid)){
      ans = mid;
      end = mid - 1;
    }
    else{
      start = mid +1;
    }
    mid = start + (end-start)/2;
  }
  return ans;
}

int main(){
  int arr[4] = {10,20,30,40};
  int m = 2;
  cout<<allocate(arr , 4 , m);
  return 0 ;
}