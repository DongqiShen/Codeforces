#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
		int k = n/m;
		vector<int> array(n);
		vector<vector<int>> vec(m);
		for (int i = 0; i < n; ++i){
			cin>>array[i];
			vec[array[i]%m].push_back(i);
		}

		long long int ans = 0;
		vector<pair<int,int>> fre;
		for (int i = 0; i < 2 * m; ++i){
			int cur = i % m;
			while(int(vec[cur].size()) > k){
				int elem = vec[cur].back();
				vec[cur].pop_back();
				fre.push_back(make_pair(elem, i));
			}
			while(int(vec[cur].size()) < k && !fre.empty()){
				int elem = fre.back().first;
				int mmod = fre.back().second;
				fre.pop_back();
				vec[cur].push_back(elem);
				array[elem] += i - mmod;
				ans += i - mmod;
			}
		}
		cout<< ans <<endl;
		for (int i = 0; i < n; ++i)
			cout<<array[i]<<" ";
		cout<<endl;
	}
}
