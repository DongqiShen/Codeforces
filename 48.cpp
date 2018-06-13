#include<iostream>
#include<cmath>
using namespace std;

int main(){
	string str;
	while(cin>>str){
		string s = "00" + str;
		unsigned n = s.length();
		for (unsigned int i = 0; i < n; ++i){
			for (unsigned int j = i+1; j < n; ++j){
				for (unsigned int k  = j + 1; k < n; ++k){
					int sum = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
					//cout<<sum<<endl;
						if (sum % 8 == 0){
							cout<<"YES\n"<<sum<<endl;
							return 0;
						}
				}
			}
		}
		cout<<"NO\n";
	}
}

