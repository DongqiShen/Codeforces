#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	string s;
	int n,p;
	int sum = 0;
	int temp, l = -1, r;
	while(cin>>n>>p>>s){
		n--;
		p--;
		sum = 0;
		l = -1;
		r = 0;
		p = (p > n/2? n - p:p);
		for (int i = 0; i <= n/2; ++i){
			if (s[i]!=s[n-i]){
				temp = abs(s[i] - s[n-i]);
				sum += min(temp, 26 -temp);
				if (l == -1)
					l = i;
				else r = i;
			}			
		}
		sum += min(abs(p-l), abs(p-r));
		sum += max(r - l, 0);
		cout<<(l < 0 ? 0:sum)<<endl;
	}
}
