#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int row;
    cin>>row;
    for(int i=0;i<row;++i){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
