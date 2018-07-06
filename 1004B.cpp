#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int n,m,l,r;
	while(cin>>n>>m){
		for(int i = 0; i < m; ++i)
			cin>>l>>r;
		for(int i = 0; i < n; ++i)
			cout<<i%2;
		cout<<"\n";
	}
}
