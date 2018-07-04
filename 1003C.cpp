#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	while(cin>>n>>k){
		int array[5002];
		for (int i = 1; i <= n; ++i){
			cin>>array[i];
			array[i] += array[i - 1];
		}
		double ans = 0;
		for (int i = 0; i <= n; ++i){
			for (int j = i+k; j <= n; ++j){
				ans = max(ans, 1.*(array[j] - array[i])/(j - i));	
			}
		}
		cout<<setprecision(10)<<ans<<"\n";
	}
}
