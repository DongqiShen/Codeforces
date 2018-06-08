#include<iostream>
using namespace std;

int main(){
	int k, a, b;
	int sum;
	while(cin>>k>>a>>b){
		sum = a/k + b/k;
		if ((a%k && b < k) || (b%k && a < k))
			sum = -1;
		cout<<(sum?sum:-1)<<endl;
	}
}
