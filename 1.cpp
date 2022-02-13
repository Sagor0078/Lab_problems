#include<bits/stdc++.h>
using namespace std;
const int M = 1000;
int main(){
    int N;
    cin>>N;
    array<int,M> a;
    for(int i=0;i<N;++i){
    	cin>>a[i];
    }
    for(int i = 0;i<N;++i){
    	for(int j = 0;j+1<N;++j){
    		if(a[j]>a[j+1]){
    			swap(a[j],a[j+1]);
    		}
    	}
    }
    for(int i=0;i<N;++i){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}