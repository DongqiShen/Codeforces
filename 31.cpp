#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n, k, temp;
	int mod[100001], ing[100001];
	while(cin>>n>>k){
		for (int i = 0; i < n; ++i){
			cin>>temp;
			ing[i] = temp / 10;
			mod[i] = temp % 10;
			if (temp == 100)
				mod[i] = -1;
		}
		sort(mod, mod + n);
		int count = 0;
		for (int i = n - 1; i >= 0; --i){
			if (mod[i] == -1){
				continue;
			}
			if(k - (10 - mod[i]) >= 0){
				k = k - (10 - mod[i]);
				count++;
			}
		}
		if (k >= 10){
			sort(ing, ing + n);
			for (int i = n - 1; i >= 0; i--){
				if (ing[i] == 10)
					continue;
				for (int j = 9; j > ing[i]; --j){
					if(k - 10 < 0)
						break;
					k = k - 10;
					count += 1;
				}
			}
		}
		int sum = 0;
		for (int i = 0; i < n; ++i){
			sum += ing[i];
		}
		sum += count;
		cout<<sum<<endl;
	}
}
