#include <iostream>

using namespace std;

string title(string F){
	//Seu código aqui
  int n=F.length();
  for(int i=0; i<n; i++){
    if(F[i]!=' '){  
      //maiuscula
      if(i==0 or F[i-1]==' '){
        //minusculo
        if(F[i]>96 and F[i]<123){
          F[i]-=32;
        }
      }

      //minuscula
      if(i!=0 and F[i-1]!=' '){
        //maiúsculo
        if(F[i]>64 and F[i]<91){
          F[i]+=32;
        }
      }  
    }
  }
  return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}