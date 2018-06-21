#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main(){
	int n, k;
	int array[102];
	while(cin>>n>>k){
		memset(array, 0, sizeof(array));
		int left = 0,right = 0;
		for (int i = 0; i < n; ++i)
			cin>>array[i];
		for (int i = 0; i < n; ++i){
			if (array[i] <= k){
				left++;
				continue;
			}
			else break;
		}
		for (int i = n-1; i >= 0; --i){
			if (array[i] <= k){
				right++;
				continue;
			}
			else break;
		}
		if (left == n)
			cout<<n<<endl;
		else
			cout<<left+right<<endl;
	}
}
