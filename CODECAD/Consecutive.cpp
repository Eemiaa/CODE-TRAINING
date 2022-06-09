#include <iostream>

using namespace std;

int main() {
  int N, V1, V2, XM, X;
  V1=0;
  XM=0;
  X=0;
  cin >> N;
  for(int i=0; i<N;i++){
    cin >> V2;
    if(V2==V1){
      X++;
      if(X>XM){
        XM = X;
      }
    }else{
      X=0;
    }
    V1=V2;
  }
  cout << XM+1;
  }