#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
	int n;
	long long int a[3003];
	long long int b[3003];
	long long int dp[3005];
	long long int ans = 1e9;
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin>>a[i];
	for (int j = 0; j < n; ++j)
      		cin>>b[j], dp[j] = 1e9;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < i; j++){
			if (a[i] > a[j]){
				dp[i] = min(dp[i], b[i]+b[j]);
				ans = min(ans, dp[j] + b[i]);
			}
		}
	}
	cout<<(ans == 1e9?-1:ans)<<endl;
}
