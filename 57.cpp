#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n;
	string s;
	while(cin>>n>>s){
		vector<int> div;
		for (int i = 2; i <= n; ++i)
			if (n%i == 0)
				div.push_back(i);
		string ns = s;
		for (unsigned int i = 0; i < div.size(); ++i){
			string ps = "";
			string ls = "";
			for (int j = 0; j < div[i]; ++j)
				ps += ns[j];
			reverse(ps.begin(), ps.end());
			for (unsigned int j = div[i]; j < s.size(); ++j)
				ls +=ns[j];
			ns = ps+ls;
		}
		cout<<ns<<endl;
	}
}
