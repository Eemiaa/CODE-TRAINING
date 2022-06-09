#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double N, M;
  cin >> N >> M;
  std::cout.precision(4);
  std::cout << std::fixed << pow(N, M);
  }  