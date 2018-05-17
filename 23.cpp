#include<iostream>
using namespace std;

int main(){
	char map[102][102];
	int n,m;
	bool flag = true;
	cin>>n>>m;
	for(int i = 1; i <= n; ++i){
		for (int j = 1; j <= m; ++j)
			cin>>map[i][j];
	}
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j<= m; ++j){
			if (map[i][j] == '.'){
				if(map[i-1][j-1] == '*' || map[i-1][j] == '*' || map[i-1][j+1] == '*' || map[i][j-1] == '*' || map[i][j+1] == '*' || map[i+1][j-1] == '*' || map[i+1][j] == '*' || map[i+1][j+1] == '*')
					flag = false;
			}
			else if (map[i][j] == '*')
				continue;
			else {	
				int count = 0;
				if (map[i-1][j-1] == '*')
					count++;
				if (map[i-1][j] == '*')
					count++;
				if (map[i-1][j+1] == '*')
					count++;
				if (map[i][j-1] == '*')
					count++;
				if (map[i][j+1] == '*')
					count++;
				if (map[i+1][j-1] == '*')
					count++;
				if (map[i+1][j] == '*')
					count++;
				if (map[i+1][j+1] == '*')
					count++;
				if(map[i][j] != (count + '0'))
					flag = false;
			}
		}
	}
	cout<<(flag? "YES":"NO");
}
