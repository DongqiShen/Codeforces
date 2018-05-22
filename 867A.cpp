#include<iostream>
using namespace std;

int main(){
	int n;
	string str;
	while(cin>>n && cin>>str){
		int sum = 0;
		char s = str[0];
		for (int i = 0; i < n; ++i){
			if (s == str[i])
				continue;
			if (s == 'S')
				sum++;
			else if (s == 'F')
				sum--;
			s = str[i];
		}
	cout<<(sum>0?"YES":"NO")<<endl;
	}
}
