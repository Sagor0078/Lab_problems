#include<bits/stdc++.h>
using namespace std;
const int M = 1000;
int main(){
	int N;
	cin>>N;
	array<int,M> A;
	for(int i=0;i<N;++i){
		cin>>A[i];
	}
	for(int i=0;i<N;++i){
		for(int j=0;j+1<N;++j){
			if(A[j]<A[j+1]){
				swap(A[j+1],A[j]);
			}
		}
	}
	for(int i=0;i<N;++i){
		cout<<A[i]<<" ";
	}
	cout<<"\n";
}