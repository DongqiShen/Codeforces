#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

struct node
{
	long long int x,y;
	int id;
}array[100005];

bool cmp(node a, node b){
	return a.x>b.x;
}

int main(){
	int n;
	while(cin>>n){
		for (int i = 0; i < 100005; ++i){
			array[i].x = 0;
			array[i].y = 0;
		}
		for (int i = 0; i < n; ++i){
			cin>>array[i].x;
			array[i].id = i;
		}
		for (int i = 0; i < n; ++i)
			cin>>array[i].y;
		sort(array, array+n, cmp);
		cout<<n/2+1<<endl<<array[0].id+1<<" ";
		for (int i = 1; i < n; i+=2){
			if (array[i].y < array[i+1].y)
				cout<<array[i+1].id+1<<" ";
			else
				cout<<array[i].id+1<<" ";
		}
		cout<<endl;
	}
}
