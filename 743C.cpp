#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if (n == 1){
			cout<<-1<<endl;
			continue;
		}
		cout<<n<<" "<<n+1<<" "<<n*(n+1)<<endl;
	}
}
