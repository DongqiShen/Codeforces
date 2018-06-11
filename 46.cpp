#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n,k;
	int per[300005];
	while(cin>>n>>k){
		memset(per, 0 ,sizeof(per));
		for (int i = 0; i < k; ++i ){
			if (i%2 == 0){
				per[i] = i/2+1;
				continue;
			}	
			else if (i%2 == 1){
				per[i] = n - (i+1)/2+1;
				continue;
			}
		}
		int j = (k % 2? per[k-1] + 1 : per[k-1]-1);
		int add = (k % 2? 1:-1);
		for (int i = k; i < n; ++i){
			per[i] = j;
			j+=add;
		}
		for (int i = 0; i < n; ++i)
			cout<<per[i]<<" ";
		cout<<endl;
	}
}
