#include <iostream>

using namespace std;

bool eh_primo(int x){
	//Seu código aqui.
  int n=0;
  for(int i=x; i>0;i--){
    if(x%i==0){n++;}
  }
  if(n==2){
    return true;
  }else{
    return false;
  }
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}