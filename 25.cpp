#include<iostream>

using namespace std;

int main(){
	int p, q, l, r;
	int x[1001][2], z[1001][2];
	int count = 0;
	cin>>p>>q>>l>>r;
	for (int i = 0; i < p; ++i)
		cin>>x[i][0]>>x[i][1];
	for (int i = 0; i < q; ++i)
		cin>>z[i][0]>>z[i][1];
	for (int k = l; k <= r; ++k){
		bool flag = 0;
		for (int i = 0; i < p; ++i){
			for(int j = 0; j < q; ++j){
				if (z[j][1] + k < x[i][0] || z[j][0] + k > x[i][1])
					continue;
				else {
					flag = 1;
					break;
				}
			}
			if (flag == 1){
				break;
			}
		}
		if (flag == 1)
			count++;
	}
	cout<<count;
}
