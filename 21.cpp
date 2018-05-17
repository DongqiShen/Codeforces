#include<iostream>
using namespace std;

int main(){
	long long int l, r, k, p = 1;
	cin>>l>>r>>k;
	bool flag = 1;
	while ( p <= r ){
		if (p >= l){
			cout<<p<<endl;
			flag = 0;
		}
		if(r/k >=p) 
			p*=k;
		else 
			break;
	}
	if(flag)
		cout<<-1;

}
