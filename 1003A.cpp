#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int array[101];
	while(cin>>n){
		for (int i = 0; i < n; ++i)
			cin>>array[i];
		sort(array, array+n);
		int max = 1;
		int value = array[0];
		int count = 1;
		for (int i = 1; i < n; ++i){
			if(array[i] == value){
				count++;
			}
			if (count > max){
				max = count;
			}
			if(array[i] != value){
				value = array[i];
				count = 1;
			}
		}
		cout<<max<<"\n";
	}
}
