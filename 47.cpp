#include<iostream>
using namespace std;

int main(){
	long long int n, k, a, b;
	char green = 'G', black = 'B';
	while(cin>>n>>k>>a>>b){
		string str = "";
		long long int sh = a > b? b:a;
		long long int big = a > b? a:b;
		if (k * (sh + 1) < big){
			cout<<"NO"<<endl;
			continue;
		}
		bool flag = (a > b ? 0:1);
		int ca = 0;
		int cb = 0;
		for (int i = 0; i < n; ++i){
		         if (flag == 0){
				str+=green;
				a--;
				ca++;
		         }
		         else {
				str+=black;
				b--;
				cb++;
			 }
			 long long int now = flag? b:a;
                         long long int next = flag? a:b;
			 if (k * now < next || ca == k || cb == k){
				 flag = !flag;
				 ca = 0;
				 cb = 0;
			 }

		}
		cout<<str<<endl;
	}
}
