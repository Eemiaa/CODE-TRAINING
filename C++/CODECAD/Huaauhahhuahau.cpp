#include <iostream>

using namespace std;

int main() {
  char result;
  string risada, vogais="";
  cin>>risada;
  int i = risada.length(), ini=0,fin;
  for(int j=0; j<i; j++){
    switch(risada[j]){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        vogais+=risada[j];
        break;
    }
  }
  i=vogais.length();
  fin=i-1;
  for(int j=0; j<i; j++){
    if(vogais[ini]!=vogais[fin]){
      result='N';
      break;}else{
        result='S';
      }
    ini++;
    fin--;
  }
  cout<<result;
}