#include<iostream>
using namespace std; 

int main(){
	int n;
	int a,b,l,r,ans = -1;
	cin>>n;
	for (int i = 0; i < n; i++){
		cin>>a>>b;
		if(i == 0){
			l = a;
			r = b;
		}
		if (a < l){
			l = a;
			ans = -1;
		}
		if (b > r){
			r = b;
			ans = -1;
		}
		if (a == l && b == r )
			ans = i+1;
	}
	cout<<ans;
}
