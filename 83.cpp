#include<iostream>
using namespace std;

int main(){
	int n;
	long long int array[200008];
	while(cin>>n){
		for (int i = 0; i < n; ++i)
			cin>>array[i];
		long long int leftsum = array[0], rightsum = array[n-1];
		int posl = 0, posr = n -1;
		long long int sum = 0;
		bool find = 0;
		while(posl < posr){
			if (leftsum == rightsum){
				posl++;
				posr--;
				find = 1;
				sum = leftsum;
				leftsum+=array[posl];
				rightsum+=array[posr];
				continue;
			}
			if (leftsum < rightsum){
				posl++;
				leftsum+=array[posl];
				continue;
			}
			if (leftsum > rightsum){
				posr--;
				rightsum += array[posr];
				continue;
			}
		}
		cout<<(find?sum:0)<<endl;
	}
}
