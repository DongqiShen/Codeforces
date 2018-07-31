#include<iostream>
#include<vector>
using namespace std;

bool judge(long long int maxsize, long long int leftmove, long long int s){
	if (maxsize + leftmove <= s)
		return 1;
	return 0;
}

int main(){
	long long int n,k,s;
	while(cin>>n>>k>>s){
		if ((n - 1) * k < s || k > s){
			cout<<"NO\n";
			continue;
		}
		long long int have_done = 0;
		long long int current_pos = 1;
		vector<long long int> route;
		for (long long int i = 1; i <= k; ++i){
			if (judge(n-1, k-i, s - have_done)){
				have_done += n - 1;
				if (current_pos == 1){
					current_pos = n;
					route.push_back(current_pos);
					continue;
				}
				else if (current_pos == n){
					current_pos = 1;
					route.push_back(current_pos);
		                        continue;
				}
			}
			if (!judge(n-1,k-i, s - have_done)){
				if (i != k){
					have_done += 1;
					if (current_pos == 1){
						current_pos = 2;
						route.push_back(current_pos);
						continue;
					}
					if (current_pos == 2){
						current_pos = 1;
						route.push_back(current_pos);
						continue;
					}
					if (current_pos == n){
						current_pos = n-1;
						route.push_back(current_pos);
						continue;
					}
					if (current_pos == n-1){
						current_pos = n;
						route.push_back(current_pos);
						continue;
					}
				}
				if (i == k){
					if (s - have_done + current_pos <= n){
						route.push_back(s - have_done + current_pos);
						break;
					}
					if (current_pos - (s - have_done) >= 1){
						route.push_back(current_pos - (s - have_done));
						break;
					}
				}
				continue;
			}
		}
		cout<<"YES\n";
		for (unsigned int i = 0; i < route.size(); ++i)
			cout<<route[i]<<" ";
		cout<<endl;
	}
}
