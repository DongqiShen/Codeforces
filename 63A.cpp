#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	string name[101], role[101];
	vector<int> seq;
	string s[] = {"rat", "woman", "child", "man", "captain"};
	while(cin>>n){
		seq.clear();
		for (int i = 0; i < n; ++i)
			cin>>name[i]>>role[i];
		for (int i = 0; i < 6; ++i){
			string temp = s[i];
			if (i == 2)
				continue;
			for (int j = 0; j < n; ++j){
				if (i == 1){
					if (role[j] == s[1] || role[j] == s[2])
						seq.push_back(j);
					continue;
				}
				if (role[j] == s[i])
					seq.push_back(j);
			}
		}
		for (int i = 0; i < n; i++)
			cout<<name[seq[i]]<<endl;
	}
}
