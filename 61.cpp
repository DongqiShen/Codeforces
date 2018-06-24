#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		double array[101];
		double sum = 0.0;
		for (int i = 0; i < n; ++i){
			cin>>array[i];
			sum+=array[i];
		}
		sort(array, array+n);
		if (sum / n >= 4.5){
			cout<<0<<endl;
			continue;
		}
		double csum = sum;
		int i = 0;
		for (; i < n; ++i){
			csum = csum - array[i]+5;
			if(csum / n >= 4.5)
				break;
		}
		cout<<i+1<<endl;
	}


}
