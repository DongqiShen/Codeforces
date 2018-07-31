#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct song{
	long long int a;
	long long int b;
	long long int x;
};

bool cmp(song aa, song bb){
	return aa.x > bb.x;
}


int main(){
	int n;
	long long int m;
	while(cin>>n>>m){
		song array[100002];
		int p,q;
		for (int i = 0; i < n; ++i){
			cin>>p>>q;
			array[i].a = p;
			array[i].b = q;
			array[i].x = p - q;
		}
		sort(array, array+n, cmp);
		long long int sumb = 0;
		long long int suma = 0;
		for (int i = 0; i < n; ++i){
			sumb += array[i].b;
			suma += array[i].a;
		}
		if (sumb > m){
			cout<<-1<<endl;
			continue;
		}
		int count = 0;
		for (int i = 0; i < n; ++i){
			if (suma <= m)
				break;
			suma -= array[i].x;
			count++;
		}
		cout<<count<<endl;
	}
}
