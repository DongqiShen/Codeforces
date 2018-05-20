#include<iostream>

using namespace std;

int main(){
	long long int n;
	long long int sum = 0;
	long long f = 0;
	cin >> n;
	for (long long int i = 0; 1; ++i){
		sum += i;
		if (sum >= n){
			f = i;
			n = n - (sum - i);
			break;
		}
	}
	cout<<n<<endl;
}
