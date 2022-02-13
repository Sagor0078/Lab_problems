#include<bits/stdc++.h>
using namespace std;
const int m = 1000;
int main(){
   int N;
   cin>>N;
   array<int,m> a;
   array<int,m> b;
   for(int i=0;i<N;++i){
      cin>>a[i];
      b[i] = a[i];
   }
   b[0] = 90;// insert 90 in first position
   for(int i=0;i<N;++i){
      cout<<b[i]<<" ";
   }
   cout<<"\n";
   return 0;
}
