#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, acertos=0;
  string res, gabarito;
  cin>>n>>gabarito>>res;
  for(int i=0; i<n; i++){
    if(gabarito[i]==res[i]){
      acertos++;
    }
  }
  cout<<acertos;
}
