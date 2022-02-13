#include<bits/stdc++.h>
using namespace std;
const int m = 1000;
int32_t main(){
    int n;
    cin>>n;
    array<int,m> a;
    for(int i=0;i<n;++i) cin>>a[i];
    int element;cin>>element;
    bool ok = false;
    int pos = 0;
    for(int i=0;i<n;++i){
        if(a[i] == element){
            ok = true;
            pos = i+1;
            break;
        }
    }
    if(ok){
        cout<<element<<" at position : "<<pos<<"\n";
    }else{
        cout<<"Not fount!\n";
    }
    return 0;
}
