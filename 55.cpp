#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int n;
	int dp[4010][4010];
	int array[4010];
	while(cin>>n){
		for (int i = 0; i < n; ++i)
			cin>>array[i];
		memset(dp, 0, sizeof(dp));
		int ans = 1;
		for (int i = 0; i < n; ++i){
			int k = -1;
			for (int j = 0; j < i; ++j){
				if (k == -1)
					dp[i][j] = 2;
				else 
				        dp[i][j] = dp[j][k]+1;
				if (array[j] == array[i])
					k = j;
				ans = max(ans, dp[i][j]);
			}
		}
		cout<<ans<<endl;
	}
}
