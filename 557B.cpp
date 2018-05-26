#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
	int n;
	long long int w;
	int cups[200002];
	while(cin>>n>>w){
		for (int i = 0; i < 2 * n; ++i)
			cin>>cups[i];
		sort(cups,cups+2*n);
		float m = min(3.0 * cups[0], 1.5*cups[n])*n;
		cout<<fixed<<setprecision(7)<<(w > m? m:w)<<endl;
	}
}
