#include<iostream>
using namespace std;
int main(){
	int a, b, temp;
	int n;
	int sum = 0;
	int vactwo = 0;
	while(cin>>n>>a>>b){
		for (int i = 0; i < n; ++i){
			cin>>temp;
			if (temp == 1){
				if (a > 0){
					a--;
					continue;
				}
				else if (b > 0){
					b--;
					vactwo++;
					continue;
				}
				else if (vactwo > 0){
					vactwo--;
					continue;
				}
				else {
					sum++;
				}
			}
			else {
				if (b > 0)
					b--;
				else
					sum+=2;
			}
		}
		cout<<sum<<endl;
	}
}
