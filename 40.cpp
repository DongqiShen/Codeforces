#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
	int n,k;
	int array[51];
	while(cin>>n>>k){
		memset(array, 0, sizeof(array));
		for (int i = 0; i < n; ++i)
			cin>>array[i];
		sort(array, array+n);
		if (k > n){
			cout<<-1<<endl;
			continue;
		}
		cout<<array[n-k]<<" "<<0<<endl;
	}
}
