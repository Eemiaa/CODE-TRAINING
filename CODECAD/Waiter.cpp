#include <iostream>

using namespace std;

int main() {
  int B, C, L, contC;
  contC = 0; 
  cin >> B;
  for(int i = 0; i<B; i++){
    cin >> L;
    cin >> C;
    if(L>C){
      contC = contC+C;
    } 
  }
  cout << contC;
}