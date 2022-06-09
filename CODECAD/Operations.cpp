#include <iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main() {
  char tipo='y';
  double a=0, b=0; 
  cin>>tipo;
  cin >> a >> b;
  cout<<fixed<<setprecision(2);
  if(tipo=='D'){
    cout<<(a/b);}
  if(tipo=='M'){
    cout<<(a*b);}
    }