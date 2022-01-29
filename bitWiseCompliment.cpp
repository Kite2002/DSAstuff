#include<iostream>
#include<math.h>

using namespace std;

int bitWiseCompliment(int num){
  int answer , m = num , msk = 0;
  while (m != 0)
  {
    msk = (msk<<1)|1;
    m = m>>1;
  }
  return answer = ((~num)&msk);
  
}

int main(){
  int num = 9;
  cout<<bitWiseCompliment(num);
  return 0;
}