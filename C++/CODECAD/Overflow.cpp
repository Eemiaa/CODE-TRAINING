#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int max, a, b, res;
  char opcao;
  cin>>max>>a>>opcao>>b;
  if(opcao=='+'){res=a+b;}if(opcao=='*'){res=a*b;}
  if(res>max){
    cout<<"OVERFLOW";
  }else{
    cout<<"OK";
  }
}