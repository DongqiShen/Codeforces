#include<bits/stdc++.h>

using namespace std;

int main(){
	string p,q;
	unsigned int a,b;
	while(cin>>p>>q){
		a = p.length();
		b = q.length();
		while(a > 0 && b > 0){
			if(p[a-1] != q[b-1])
				break;
			a--;
			b--;
		}
		cout<<a+b<<"\n";
	}
}
