#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
	int m,s;
	int cs;
	string ch = "0123456789";
	while(cin>>m>>s){
		cs = s;
		if (s > m*9 || (s == 0 && m != 1)){
			cout<<-1<<" "<<-1<<endl;
			continue;
		}
		string max = "";
		string min = "";
		for (int i = 0; i < m; ++i){
			if (s >= 10){
				s -= 9;
				max += '0'+ 9;
			}
			else {
				max += '0' + s;
				s = 0;
			}
		}
		s = cs;
		for (int i = 0; i < m; ++i){
			if (s >= 10){
				s -= 9;
				min = ch[9] + min;
				continue;
			}
			if (i == m - 1)
				min = ch[s] + min;
			else {
				if (s == 1){
					min = ch[0] + min;
					continue;
				}
				min = ch[s-1] + min;
				s = 1;
			}
		}
		cout<<min<<" "<<max<<endl;
	}
}

