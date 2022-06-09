#include <iostream>
#include <algorithm>
using namespace std;
struct Posicao{
  int pais, O, P, B;
};
bool posic(Posicao a, Posicao b){
  bool z=false;
  if(a.O!=b.O){return a.O>b.O;}
  if(a.P!=b.P){return a.P>b.P;}
  if(a.B!=b.B){return a.B>b.B;}
  return a.pais<b.pais;
  }

int main() {
  int N, M, x;
  cin>>N>>M;
  Posicao posi[N]; 
  for(int i=0;i<N;i++){
  posi[i].O=0;
  posi[i].P=0;
  posi[i].B=0;
  posi[i].pais=i+1;
}
  for(int i=0; i<M; i++){
    for(int j=0; j<3; j++){
      cin>>x;
      switch(j){
        case 0:
          posi[x-1].O++;
          break;
        case 1:
          posi[x-1].P++;
          break;
        case 2:
          posi[x-1].B++;
          break;
      }
    }
  }
  sort(posi, posi+N, posic); 
  for(int i=0;i<N;i++){
    cout<<posi[i].pais<<" ";
  }
}