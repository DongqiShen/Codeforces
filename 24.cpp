#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
	char map[8][8];
	int af = 0, bf = 0;
	int blocka[8];
	int blockb[8] = {0};
	fill_n(blocka, 8, 8);
//	memset(blockb, 0, 8);
//	memset(blocka, 8, 8);
//	for(int i = 0;i<8;++i)
//		cout<<blockb[i]<<" "<<endl;
	for (int i = 0; i < 8; ++i){
		for (int j = 0; j < 8; ++j){
			cin>>map[i][j];
			if (map[i][j] == 'B' && blocka[j] == 8)
				blocka[j] = 7;
			if (map[i][j] == 'W' && blocka[j] == 8)
				blocka[j] = i;
			if (map[i][j] == 'B' && i >= blockb[j])
				blockb[j] = i;
			if (map[i][j] == 'W' && blockb[j] != 0)
				blockb[j] = 0;
		}
	}
	sort(blockb, blockb+8);
	sort(blocka, blocka+8);
//	for(int i = 0;i<8; ++i)
//		cout<<blocka[i]<<" "<<endl;
        af = blocka[0];
	bf = blockb[7];
//	cout<<af<<endl<<bf<<endl;
	cout<<(af <= 7-bf ? 'A':'B')<<endl;
}
