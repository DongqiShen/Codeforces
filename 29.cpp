#include<iostream>
using namespace std;

int main(){
	int n;
	int array[100001];
	while(cin>>n){
		int count = 0;
		for (int i = 0; i < n; ++i){
			cin>>array[i];
			if(array[i] == i)
				count++;
		}
		int inc = 0;
		for (int i = 0; i < n; ++i){
			if(array[i] != i && array[array[i]] == i){
				inc = 2;
				break;
			}
			else {
				inc = 1;
			}
		}
		cout<<(count == n? count:count+inc)<<endl;
	}
}
