#include <iostream>
#include <algorithm> 

using namespace std;

int main(){
 int n, x=0; 
 string r="";
 cin>>n;
 int v[n], v2[n], v3[n];
 for(int i=0; i<n; i++){
   cin>>v[i];
   v2[i]=v[i];
 }
 sort(v,v+n);
 for(int i=0; i<n; i++){
   if(v[i]!=v2[i]){
     v3[x]=v2[i];
     x++;
   }
 }
 cout<<x<<endl;
 sort(v3,v3+x);
 for(int i=0; i<x; i++){
   cout<<v3[i]<<" ";
 }
}