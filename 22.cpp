#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n];
	for( int i = 0; i < n; ++i){
		cin>>array[i];
	}
        sort(array, array+n);
	cout<<(n % 2 ? array[n/2] : array[n/2 - 1]);
}
//[4, 23, 37, 38, 60, 67, 81, 82, 86, 96]
