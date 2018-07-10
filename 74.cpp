#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int array[1002];
	int c[1002];
	while(cin>>n){
		int j = 0;
		for (int i = 1; i <= n; ++i){
			cin>>array[i];
			if (i == 1){
				c[0] = array[1];
				continue;
			}
			if(array[i] == 1){
				c[j] = array[i-1];
				j++;
			}
			if(i == n){
				c[j] = array[i];
			}
		}
		cout<<j+1<<"\n";
		for (int i = 0; i <= j; ++i)
			cout<<c[i]<<" ";
		cout<<"\n";
	}
}
