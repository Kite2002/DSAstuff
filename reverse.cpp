#include<iostream>
#include<math.h>

using namespace std;

int reverse(int num) {
    int answer = 0,digit,i = 0;
    
    while(num!=0){
        digit = num%10;
        answer = answer*10 + digit;
        i++;
        num = num/10;
    }
    return answer;
}

int main(){
  int num;
  cin>>num;
  cout<<reverse(num);
  return 0;
}