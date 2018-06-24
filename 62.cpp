#include<iostream>

using namespace std;

bool check(long long k, long long n){
	long long sum = 0;
	long long cur = n;
	while(cur > 0){
		long long o = min(cur, k);
		sum += o;
		cur -= o;
		cur -= cur / 10;
	}
	return sum * 2 >= n;
}

int main(){
	long long int n;
	while(cin>>n){
		long long int l = 1, r = n;
		long long ans = n;
		while(l <= r){
			long long k = (l+r) / 2;
			if (check(k, n)){
				ans = k;
				r = k -1;
			}
			else 
				l = k +1;
		}
		cout<<ans<<endl;
	}
}
