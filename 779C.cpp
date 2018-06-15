#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct price{
	int a;
	int b;
}array[200005];

bool cmp(price x, price y){
	return (x.a - x.b < y.a - y.b);
}

int main(){
	int n,k;
	while(cin>>n>>k){
		for (int i = 0; i < n; ++i)
			cin>>array[i].a;
		for (int i = 0; i < n; ++i)
			cin>>array[i].b;
		sort(array, array+n, cmp);
		long long int sum = 0;
		int i = 0;
		for (; i < k; ++i)
			sum += array[i].a;
		for (int j = i; j < n; ++j)
			sum+=(array[j].a - array[j].b < 0? array[j].a:array[j].b);
		cout<<sum<<endl;
	}
}
