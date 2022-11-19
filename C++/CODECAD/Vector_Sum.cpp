#include <iostream>

using namespace std;

int soma_vetor(int n, int v[]){
	// Seu código aqui.
  int x=0;
  for(int i=0;i<n;i++)
		x+=v[i];
    return x;
}

int main(){
	
	int n, v[100100];
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << soma_vetor(n,v) << "\n";
}