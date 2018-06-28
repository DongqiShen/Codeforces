#include<iostream>
#include<set>
using namespace std;

int main(){
	int n;
	string s;
	multiset<string> a;
	while(cin>>n){
		for (int i = 0; i < n; ++i){
			cin>>s;
			a.insert(s);
		}
		for (int i = 0; i < n; ++i){
			cin>>s;
			auto p = a.find(s);
			if(p != a.end())
				a.erase(p);
		}
		cout<<a.size()<<endl;
	}
}
