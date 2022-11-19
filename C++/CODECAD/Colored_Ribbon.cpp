#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, dd, de;
  cin >> n; 
  int matriz[n];
  for(int i=0; i<n; i++){
    cin>> matriz[i];
  }
  for(int ini=0; ini<n; ini++){
    bool okd = false;
    bool oke = false;
    int dd =0;
    int de =0;
    if(matriz[ini]!=0){
    //direita: distância até o zero mais próximo
      for(int j=ini; j<=n; j++){
        if(matriz[j]!=0){
          dd++;
        }
        else{
          okd=true;
          break;
        }
      }
    //esquerda: distância até o zero mais próximo
      for(int j=ini; j>=0; j--){
        if(matriz[j]!=0){
          de++;
        }
        else{
          oke=true;
          break;
        }
      }
    //calculo    
      if((de<=dd and oke==true) or okd==false){
        if(de>=9){matriz[ini]=9;}
        else{matriz[ini]=de;}
        }
      if((dd<=de and okd==true) or oke==false){
        if(dd>=9){matriz[ini]=9;}
        else{matriz[ini]=dd;}
      }  
      }  
    }
    for(int i=0; i<n; i++){
    cout<< matriz[i]<< " ";
  }
  }