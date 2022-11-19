#include <iostream>

using namespace std;

int main() {
  int A, B, N, I;
  A=0;
  B=0;
  N=0;
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> I;
    if(I==1){
      A++;
    }
    if(I==2){
      A++;
      B++;
    }
  }
  cout << A%2 <<"\n";
  cout << B%2;
  }