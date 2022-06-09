#include <iostream>

using namespace std;

int main() {
  int n;
  cin>>n;
  int somal[n], somac[n], soma, max=0;
  int matriz[n][n];
  //pedindo os valores
  for(int l=0; l<n; l++){
    for(int c=0; c<n; c++){
      cin>>matriz[l][c];
    }
  }
  //somando as linhas e colunas
  for(int i=0; i<n; i++){
    somal[i]=0;
    somac[i]=0;
    for(int j=0; j<n; j++){
      somal[i]+=matriz[i][j];
      somac[i]+=matriz[j][i];
    }
    }
  //verificando os índices e quem é a maior
  for(int l=0; l<n; l++){
    for(int c=0; c<n; c++){
    soma=0;
    soma=(somal[l]+somac[c])-(2*matriz[l][c]);
    if(soma>max){
      max=soma;
    }
    }
    }
  cout<<max;
  
    }