#include<iostream>
#include<algorithm>
using namespace std;

int main (){
	int n;
	long long int array[1002];
	while(cin>>n){
		for (int i = 0; i < n; ++i){
			cin>>array[i];
		}
		for (int i = 0; i < n; ++i){
			if (array[i]%2 == 0)
				array[i]--;
		}
		for (int i = 0; i < n; ++i)
			cout<<array[i]<<" ";
		cout<<endl;

	}
}
