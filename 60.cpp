#include<iostream>
#include<vector>
using namespace std;

int main(){
	int a,b,c,n;
	while(cin>>a>>b>>c>>n){
		int ans = n - (a + b - c);
		if (c > a || c > b || n < a || n < b || n < c){
			cout<<-1<<endl;
			continue;
		}
		cout<<(ans >= 1? ans:-1);
		cout<<endl;
	}
}
