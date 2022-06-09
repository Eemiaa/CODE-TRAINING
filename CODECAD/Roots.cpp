#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int N;
  cin >> N;
  double X[N];
  for(int i=0;i<N;i++){
    cin >> X[i];
  }

  for(int i=0;i<N;i++){
    std::cout.precision(4);
    std::cout << std::fixed << pow(X[i], 1.0/2) << "\n";
  }
  }  
