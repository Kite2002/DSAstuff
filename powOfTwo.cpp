#include<iostream>
#include<math.h>

using namespace std;

int powOfTow(int num){
  int temp = 2;
  while(temp<=num){
    if(temp == num){
      return 1;
    }
    temp = temp*2;
  }
  return 0;
}

int main(){
  int num = 2;
  cout<<powOfTow(num);

}
