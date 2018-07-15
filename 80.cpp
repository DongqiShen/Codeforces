#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int n,m;
	int array[100];
	while(cin>>n>>m){
		for (int i = 0; i < m; ++i)
			cin>>array[i];
		sort(array, array+m);
		int minv = 10000;
		for (int i = 0; i < m - n + 1; ++i){
			minv = min(minv, array[n+i-1] - array[i]);
		}
	       cout<<minv<<endl;	
	}
}
