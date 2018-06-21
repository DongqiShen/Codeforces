#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){
	string str = "abcdefghijklmnopqrstuvwxyz";
	int n,k;
	string s;
	while(cin>>n>>k>>s){
		for (int i = 0; i < 26; ++i){
			for (int j = 0; j < n && k > 0; ++j){
				if (s[j] == str[i]){
					s[j] = '0';
					k--;
				}
			}
			if (k == 0)
				break;
		}
		for (int i = 0; i < n; ++i)
			if(s[i]!='0')
				cout<<s[i];
		cout<<endl;
	}
}
