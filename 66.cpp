#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int a[11];
	while(cin>>n){
		for (int i = 0; i < n; ++i)
			cin>>a[i];
		if (n == 1 || (a[0] == a[1] && n == 2)){
			cout<<-1<<"\n";
			continue;
		}
		cout<<1<<"\n";
		if (a[0] <= a[1])
			cout<<1;
		else cout<<2;
		cout<<"\n";
	}
}
