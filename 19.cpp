#include<bits/stdc++.h>
using namespace std;
const int M = 1000;
int32_t main(){
    int n;
    cin>>n;
    array<int,M> a;
    for(int i=0;i<n;++i) cin>>a[i];
    for(int i=0;i<n;++i){
        for(int j=0;j+1<n;j++){
            if(a[j]<a[j+1]) swap(a[j],a[j+1]);  /// bubble sort algo
        }
    }
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
