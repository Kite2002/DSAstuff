#include<iostream>

using namespace std;

int uniqueElement(int size ,int arr[]){
        int ans = 0;
        for(int i  = 0 ; i< size  ; i++){
            ans = ans^arr[i];
        }
        if(ans == 0){
            return true;
        }
        else {
            return false;
        }
}

int main(){
  int size = 5,arr[5];
  for(int i = 0; i< 5 ; i++){
    cin>>arr[i];
  }
  cout<<uniqueElement(size, arr);
}