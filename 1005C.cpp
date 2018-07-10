#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	long long int array[120003];
	ios::sync_with_stdio(false);
	while(cin>>n){
		map<long long int, long long int> count;
		for (int i = 0; i < n; ++i){
			cin>>array[i];
			count[array[i]]++;
		}
		long long int c = 0;
		for (int i = 0; i < n; ++i){
			for (int j = 1; j < 32; ++j){
				long long int  temp = pow(2, j);
				if (count[temp - array[i]] >= 2|| (count[temp - array[i]] == 1 && temp != 2*array[i])){
					c++;
					break;
				}	
			}
		}
		cout<<n - c<<"\n";
	}
}
