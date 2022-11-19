#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n=0;
  cin>> n;
  int matriz[n][n];
  int valor=0, val=0, z=0;
  bool x=false;
  for(int c=0;c<n;c++){
    for(int l=0;l<n;l++){
      cin >> matriz[l][c];
  }
  }
  //linhas
  for(int l=0;l<n;l++){
    valor=0;
    for(int c=0;c<n;c++){
      valor+=matriz[l][c]; 
  }
    if(x==false){
      val = valor;
      x=true;
    }
    if(valor!=val and x==true){
      z = -1;
      break;
    }
  }
  //colunas
  for(int c=0;c<n;c++){
    valor=0;
    for(int l=0;l<n;l++){
      valor+=matriz[l][c]; 
  }
    if(valor!=val and x==true){
      z = -1;
      break;
    }
  }
  //diagonal principal
  valor=0;
  for(int l=0;l<n;l++){
    for(int c=0;c<n;c++){
      if(l==c){
        valor+=matriz[l][c];
  }}}
    if(valor!=val and x==true){
      z = -1;
    }
  valor=0;
  //diagonal secundária
  for(int l=0;l<n;l++){
    for(int c=0;c<n;c++){
      if(((l+1)+(c+1))==(n+1)){
        valor+=matriz[l][c];
  }}}
    if(valor!=val and x==true){
      z = -1;
    }
    if(z==-1){
      cout<<z;
    }else{
      cout<<val;
    }
}
