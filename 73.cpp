#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	set<int> s;
	int array[100001] = {0};
	int temp;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>temp;
		array[temp] = s.size();
		s.insert(temp);
	}
	long long ans = 0;
	for (int i = 0; i < 100001; ++i)
		ans+=array[i];
	cout<<ans;
}
