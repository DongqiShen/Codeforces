#include<iostream>
using namespace std;

int main(){
	int n, m;
	int arr[100000];
	int t;
	int sum= 0;
	cin>>n>>m;
	sum = 2 * n - m + 1;
	for (int i = 0; i < m; i++){
		cin>>t;
		for(int j = 0; j < t; ++j)
			cin>>arr[j];
		for (int k = 0; k < t; ++k){
			if (arr[k] == k + 1)
				sum -=2;
		}
	}
	cout<<sum;
}

