#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	bool flag[101];
        int n,m;
	while(cin>>n>>m){
		int a,b;
		int count = 0;
		memset(flag, 0, sizeof(flag));
		for (int i = 0; i < n;i++){
			cin>>a>>b;
			for(int j = a; j <= b; ++j){
				if (flag[j] == 0){
					flag[j] = 1;
					count++;
				}
			}
		}
		count = m - count;
		if (count == 0){
			cout<<0<<endl;
			continue;
		}
		cout<<count<<endl;
		for (int i = 1; i <= m; ++i){
			if (flag[i] == 0)
				cout<<i<<" ";
		}
		cout<<endl;
	}	
}
