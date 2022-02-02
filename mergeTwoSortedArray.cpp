#include<iostream>

using namespace std;

void mergeSortedArray(int arr1[] ,int size1, int arr2[],int size2){
  int size3 = size1+size2;
  int arr3[size3];
  int k = 0;
  int i = 0 , j = 0;
  while(i<size1 && j<size2){
    if(arr1[i]<arr2[j]){
      arr3[k++] = arr1[i++];
    }
    else{
      arr3[k++] = arr2[j++];
    }
  }
  while(i<size1){
    arr3[k++] = arr1[i++];
  }
  while(j<size2){
    arr3[k++] = arr2[j++];
  }

  for(int m = 0; m <=size3-1 ; m++){
    cout<<arr3[m]<<" ";
  }

}

int main(){
  int arr1[6] = {1,3,5,6,10,21};
  int arr2[7] = {2,4,7,8,9,15,24};
  mergeSortedArray(arr1,6,arr2,7);
}