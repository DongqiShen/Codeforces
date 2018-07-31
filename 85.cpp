#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	string a, b;
	while(cin>>n>>a>>b){
		vector<unsigned int> array;
		char temp;
		int count = 0;
		bool flag = 0;
		if (a == b){
			cout<<0<<endl;
			continue;
		}
		for (unsigned int i = 0; i < a.length(); ++i){
			if (a[i] == b[i])
				continue;
			flag = 0;
			for (unsigned int j = i+1; j < a.length(); ++j){
				if (a[j] != b[i])
					continue;
				flag = 1;
				for (unsigned int k = j; k > i; --k){
					count++;
					temp = a[k];
					a[k] = a[k-1];
					a[k-1] = temp;
					array.push_back(k);
				}
			}
			if (flag == 0)
				break;
		}
		if (flag == 0 || count > 10000){
			cout<<"-1\n";
			continue;
		}
		cout<<array.size()<<endl;
		for (unsigned int i = 0; i < array.size(); ++i)
			cout<<array[i]<<" ";
		cout<<endl;
	}
}
