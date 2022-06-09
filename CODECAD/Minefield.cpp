#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, z;
  cin >> n; 
  char matriz[n];
  for(int i=0; i<n; i++){
    cin>> matriz[i];
  }
  for(int i=0; i<n; i++){
      z=0;
    if(matriz[i]=='1'){
      z++;}
      if(matriz[i+1]=='1'){
        z++;}
        if(matriz[i-1]=='1'){
          z++;}
    cout << z<<"\n";  
}
}