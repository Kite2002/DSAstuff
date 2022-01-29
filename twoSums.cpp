#include<stdlib.h>
#include<iostream>

using namespace std;

int twoSums(int arr[] ,int target){
  int flag = 0;
  for(int i = 0; i< 5 ; i++){
    for(int j = 0 ;j<5; j++){
      if((arr[i] + arr[j] == target)&& i !=j){
          flag = 1;
          cout<<arr[i]<<"+"<<arr[j]<<"="<<target<<endl;
          exit(0);
      }
      }
    }
    if(flag == 0){
        cout<<"no such comination";
  }

}

int main(){
  int *arr , target;
  arr = (int*)malloc(5*sizeof(int));
  for (int i = 0; i<5 ; i++){
    cin>>arr[i];
  }
  cin>>target;
  twoSums(arr , target);
  return 0 ;
}
  