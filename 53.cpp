#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct exam{
	long long int a;
	long long int b;
}array[5003];

bool cmp(exam x, exam y){
	if (x.a < y.a)
		return 1;
	else if (x.a > y.a)
		return 0;
	else 
		return x.b < y.b;
}

int main(){
	int n;
	while(cin>>n){
		for (int i = 0; i < n; ++i)
			cin>>array[i].a>>array[i].b;
		sort(array, array+n, cmp);
 		long long int last = array[0].b;
		for (int i = 0; i < n; ++i){
			last = (array[i].b < last) ? array[i].a:max(last, array[i].b);
		}
		cout<<last<<endl;
	}
}
