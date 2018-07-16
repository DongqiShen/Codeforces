#include<iostream>
#include<algorithm>

using namespace std;
struct my{
	int value;
	int index;
}myarray[2002];

bool cmp(my a, my b){
	return a.value < b.value;
}

int main(){
	int n,m;
	while(cin>>n>>m){
		int array[2002];
		for (int i = 0; i < n; ++i){
			cin>>array[i];
			myarray[i].value = array[i];
			myarray[i].index = i;
		}
		sort(myarray, myarray+n, cmp);
		int pos[m+2];
		pos[0] = 0;
		pos[m] = n;
		int sum = 0;
		for (int i = 1; i <= m; ++i){
			pos[i] = myarray[n-i].index;
			sum += myarray[n-i].value;
		}
		cout<<sum<<endl;
		sort(pos,pos+m+1);
		long long int sum2 = 0;
		for (int i = 1; i < m; ++i){
			if (i == 1){
				sum2 += pos[1]+1;
				cout<<pos[1]+1<<" ";
				continue;
			}
			sum2+= pos[i]-pos[i-1];
			cout<<pos[i] - pos[i-1]<<" ";
		}
		cout<<n - sum2<<endl;
	}
}
