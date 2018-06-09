#include<iostream>
#include<map>
using namespace std;

int main(){
	int k;
	int n;
	while(cin>>k){
		bool flag = 1;
		map<int, pair<int, int>> mymap;
		for (int i = 0; i < k; ++i){
			cin>>n;
			int array[200005];
			int sum = 0;
			for (int j = 0; j < n; ++j){
				cin>>array[j];
				sum += array[j];
			}
			for (int j = 0; j < n; ++j){
				if (flag == 0)
					break;
				if (mymap.find(sum - array[j]) != mymap.end()){
					if (i != mymap[sum-array[j]].first){
						cout<<"YES\n";
						cout<<mymap[sum-array[j]].first+1<<" "<<mymap[sum-array[j]].second+1<<endl;
						cout<<i+1<<" "<<j+1<<endl;
						flag = 0;
					}
				}
				else{
					mymap[sum-array[j]] = make_pair(i,j);
				}
			}
		}
		if(flag == 1)
	        	cout<<"NO\n";
	}
}
