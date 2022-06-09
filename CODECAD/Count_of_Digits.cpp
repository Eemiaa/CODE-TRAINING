#include <iostream>

using namespace std;

int main() {
int n, x, va[10];
cin>>n;
string matriz[n], num;

for(int i=0; i<10;i++){
  va[i]=0;
  }

for(int i=0; i<n; i++){
  cin>>matriz[i];
  x=matriz[i].length();
  num = matriz[i];
  for(int j=0; j<x; j++){
    switch(num[j]){
      case '0':
        va[0]++;
        break;
      case '1':
        va[1]++;
        break;
      case '2':
        va[2]++;
        break;
      case '3':
        va[3]++;
        break;
      case '4':
        va[4]++;
        break;
      case '5':
        va[5]++;
        break;
      case '6':
        va[6]++;
        break;
      case '7':
        va[7]++;
        break;
      case '8':
        va[8]++;
        break;
      case '9':
        va[9]++;
        break;
    }
  }
}
for(int i=0; i<10;i++){
  cout<<i<<" - "<<va[i]<<"\n";
}
}