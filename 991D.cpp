#include<iostream>
using namespace std;

int main(){
	string a,b;
	while(cin>>a>>b){
		char zero = '0';
		char ux = 'X';
		int sum = 0;
		for (unsigned int i = 0; i < a.length()-1; i++){
			if (a[i] == zero && b[i] == zero && b[i+1] == zero){
				sum++;
				a[i] = ux;
				b[i] = ux;
				b[i+1] = ux;
				continue;
			}
			else if (a[i] == zero && b[i] == zero && a[i+1] == zero){
				sum++;
				a[i] = ux;
				b[i] = ux;
				a[i+1] = ux;
				continue;
			}
			else if (a[i] == zero&& a[i+1] == zero && b[i+1] == zero){
				sum++;
				a[i] = ux;
				b[i+1] = ux;
				a[i+1] = ux;
				continue;
			}
			else if (a[i+1] == zero && b[i] == zero && b[i+1] == zero){
				sum++;
				a[i+1] = ux;
				b[i] = ux;
				b[i+1] = ux;
				continue;
			}
		}
		cout<<sum<<endl;
	}
}
