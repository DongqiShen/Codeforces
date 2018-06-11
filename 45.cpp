#include<iostream>

using namespace std;

int main(){
	string per[6] = {"ABC","ACB","BAC","BCA","CAB","CBA"};
	string s;
	while(cin>>s){
		if (s.length() <3){
			cout<<"No"<<endl;
			continue;
		}
		bool flag = 0;
		for (unsigned int i = 0; i < s.length()-2; ++i){
			if (flag == 1)
				break;
			string temp = "";
			temp = temp + s[i] + s[i+1] +s[i+2];
                        for (int j = 0; j < 6; ++j){
				if (temp == per[j]){
					flag = 1;
	                 		break;
				}
			}
		}
		cout<<(flag?"Yes":"No")<<endl;
	}
}
