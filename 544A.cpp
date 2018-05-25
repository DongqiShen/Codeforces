#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	string s;
	while(cin>>n>>s){
		bool flag = 0;
		vector<char> letters;
		for (unsigned int i = 0; i < s.length(); ++i){
			flag = 0;
			for (unsigned int j = 0; j < letters.size(); ++j){
				if (letters[j] == s[i]){
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				letters.push_back(s[i]);
		}
//		for (unsigned int i = 0 ; i < letters.size(); ++i)
//			cout<<letters[i]<<endl;
		if (int(letters.size()) < n)
			cout<<"NO\n";
		else {
			cout<<"YES\n";
			unsigned int j = 0;
			for (int i = 0; i < n; ++i){
				string ns = "";
				for (; j < s.length(); ++j){
					if (ns == ""){
						ns += s[j];
						continue;
					}
					if (i == n - 1){
						ns += s[j];
						continue;
					}
					if (s[j] != letters[i+1])
						ns += s[j];
					else break;

				}
				cout<<ns<<endl;
			}
		}
	}
}
