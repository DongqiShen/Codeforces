#include<iostream>
using namespace std;

int main(){
	int n;
	int temp;
	while(cin>>n){
		int sum = 0;
		bool flag[50001] = {1};
		for (int i = 0; i < n; ++i){
			cin >>temp;
	  		if (flag[temp] == 1 || temp > n){
				sum++;
				continue;
			}
			flag[temp] = 1;
		}
		cout<<sum<<endl;
	}
}
