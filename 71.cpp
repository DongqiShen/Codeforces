#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long d;
	while(cin>>n>>d){
		long long x[105];
		memset(x,0, sizeof(x));
		for(int i = 0; i < n; ++i)
			cin>>x[i];
		sort(x,x+n);
		int count = 2;
		for(int i = 0; i < n - 1; ++i){
			if(x[i+1] - x[i] > 2*d)//1 7=>147
				count+=2;
			if(x[i+1] - x[i]  == 2*d)
				count+=1;
		}
		cout<<count<<"\n";
	}
}
