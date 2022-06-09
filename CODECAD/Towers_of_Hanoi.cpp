#include <iostream>

using namespace std;

int hanoi(int n){
  if(n==1){
    return 1;
  }else{
  return 2*(hanoi(n-1))+1;;
  }
}

int main(){ 
  int n, teste=0, x;
  do{
    teste++;
    cin>>n;
    if(n!=0){
    cout<<"Teste "<<teste<<endl<<hanoi(n)<<"\n\n";}
    }while(n!=0);
}