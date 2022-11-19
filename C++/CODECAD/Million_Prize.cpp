#include <iostream>

using namespace std;

int main() {
  int N, A, contA, D;
  contA = 0;
  D=0;
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> A;
    if(contA<1000000){
      contA = contA + A;
      D++;

    }

  }
  cout << D;
  }