#include<iostream>
#include<cstring>
using namespace std;
#define ll long long 

int main(){
	int n;
	string s;
	int left[300005], right[300005];
	while(cin>>n){
		long long int ans = 0;
		memset(left, 0, sizeof(left));
		memset(right, 0, sizeof(right));
		for (int i = 0; i < n; ++i){
			cin>>s;
			int l = 0, r = 0;
			for (unsigned int j = 0; j < s.length(); ++j){
				if (s[j] == '(')
					l++;
				else{
					l > 0? l--:r++;
				}
			}
			if (!(l && r)){
				if (l == 0 && r == 0){
					left[0]++;
					right[0]++;
				}
				else l?left[l]++:right[r]++;
			}
		}
		for (int i = 0; i < 300005; ++i)
			ans += (ll)left[i]*right[i];
		cout<<ans<<endl;
	}
}
