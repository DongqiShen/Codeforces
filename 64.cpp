#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	long long int a;
	long long int c = 1e9;
	long long int ans;
	while(cin>>n){
		for (int i = 1; i <= n; ++i){
			cin>>a;
			a -= i - 1;
			if(c > (a+n-1)/n){
				c = (a+n-1)/n;
				ans = i;
			}
		}
		cout<<ans<<endl;
	}
}
