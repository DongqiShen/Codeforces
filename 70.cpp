#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	while(cin>>n>>q){
		map<int,int> m;
		int x;
		for (int i = 0; i < n; ++i){
			cin>>x;
			m[x]++;
		}
		for (int i = 0; i < q; ++i){
			int count = 0;
			int s = 1;
			cin>>x;
			for(; s <= x; s <<= 1);
			int temp;
			for(; s >= 1; s >>= 1){
				temp = min(m[s], x/s);
				count+=temp;
				x -= temp*s;
			}
			cout<<(!x?count:-1)<<"\n";
		}
	}
}
