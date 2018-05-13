#include<iostream>
#include<cstdio>
using namespace std;
char s[501][501];

// t[501][501] top
// l[501][501] left

int main(){
		int n,m;
		scanf("%d%d", &n, &m);
		int t[501][501] = {};
		int l[501][501] = {};
		for(int i = 1; i <= n; ++i){
			scanf("%s", s[i]+1);
			for (int j = 1; j <= m; ++j){
				t[i][j] = t[i][j-1] + t[i-1][j] - t[i-1][j-1] + (s[i][j] == '.' && s[i-1][j] == '.');
				l[i][j] = l[i][j-1] + l[i-1][j] - l[i-1][j-1] + (s[i][j] == '.' && s[i][j-1] == '.');
			}
		}
		int q;
		scanf("%d", &q);
		for(int i = 0; i < q; ++i){
			int a, b, c, d;
			scanf("%d%d%d%d", &a, &b, &c, &d);
			int sum = 0;
			sum = t[c][d] + t[a][b-1] - t[c][b-1] - t[a][d] + l[c][d] + l[a-1][b] - l[c][b] - l[a-1][d];
			printf("%d\n", sum);
		}

}
