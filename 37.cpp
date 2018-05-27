#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
	string s;
	int a, m;
	int array[200001];
	while(cin>>s>>a){
		memset(array, 0, 200001);		
		for (int i = 0; i < a; ++i){
			cin >> m;
			array[m-1] += 1;
			array[s.length() - m] += 1;
		}
		int sum = 0;
		for (unsigned int i = 0; i < s.length()/2; ++i){
			sum += array[i];
//			cout<<sum<<endl;
			if (sum % 2 == 1){
				char temp = s[i];
				s[i] = s[s.length() - i - 1];
				s[s.length() - i - 1] = temp;
			}
		}
		cout<<s<<endl;
	}
}
