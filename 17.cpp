#include<bits/stdc++.h>
using namespace std;
const int m = 1000;
int32_t main(){
    int n;
    cin>>n;
    array<int,m> a;
    for(size_t i=0;i<n;++i) cin>>a[i];
    int size = 0;
    int value;cin>>value;   // delete the value from original array
    for(size_t i=0;i<n;i++){
        if(a[i]!=value){
            a[size++] = a[i];
        }
    }
    for(size_t i=0;i<size;++i){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}




/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin>>a[i];
    int x;cin>>x;x--;
    a.erase(a.begin()+x);
    for(auto i : a){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}
*/
