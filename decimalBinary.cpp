#include<iostream>
#include<math.h>
using namespace std;


int arrayToNum(int arr[] , int size){
  int answer = 0,place = 0;
  for(int i = 0 ; i < size ; i++){
    answer = answer + (arr[i]* pow(10,i));
  }
  return answer;
}

int convertToBinaryArray(int num){
  int i = 0 ,j =0,arr[100];
  while(num != 0){
    int bit = num & 1;
    arr[i] = bit;
    num = num >>1;
    i++;
  }
  int answer  = arrayToNum(arr , i);
  return answer;
}

// int onesCompliment(int num){  

// }

int main(){
  int num ;
  cin>>num;
  if(num<0){
  //  int once =  onesCompliment(num);
  cout<<"Neg";
  }else{
    cout<<convertToBinaryArray(num);
  }
}