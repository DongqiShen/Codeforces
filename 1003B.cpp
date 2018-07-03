#include<bits/stdc++.h>

using namespace std;

int main(){
	int a, b, x;
	string unit = "01";
	char zero = '0';
	char one  = '1';
	while(cin>>a>>b>>x){
		string result = "";
		int k = (a > b? 0:1);
		for (int i = 0; i <= x; ++i){
			result += unit[(i+k)%2];
			if ((i+k)%2 == 0)
				a--;
			if ((i+k)%2 == 1)
				b--;
		}
//		cout<<result<<endl;
		if (result[0] == '1'){
			result.insert(0, b, one);
//			cout<<result<<endl;
			result.insert(b+1, a, zero);
//			cout<<result<<endl;
		}
		else {
			result.insert(0, a, zero);
			result.insert(a+1, b, one);
		}
		cout<<result<<"\n";
	}
}
