#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct point{
	long long int l;
	long long int r;
	int index;
}array[300005];

bool cmp(point a, point b){
	if (a.l < b.l)
		return 1;
	else if(a.l > b.l)
		return 0;
	else if(a.l == b.l)
		return a.r > b.r;
	return 1;
}

int main(){
	int n;
	while(cin>>n){
		for(int i = 0; i < n; i++){
			cin>>array[i].l>>array[i].r;
			array[i].index = i;
		}
		sort(array, array+n, cmp);
		bool flag = 0;
		for(int i = 1; i < n; ++i){
			if (array[i].r <= array[i-1].r){
				flag = 1;
				cout<<array[i].index+1<<" "<<array[i-1].index+1<<endl;
				break;
			}
		}
		if (flag == 0)
			cout<<-1<<" "<<-1<<endl;
	}
}
