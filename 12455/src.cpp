#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;

	scanf("%d", &t);

	while(t--){
		int n, p;
		bool ans = false;

		scanf("%d %d", &n, &p);
		vector<int> v;

		int tmp;
		for(int i = 0; i < p; i++){
			scanf("%d", &tmp);
			v.push_back(tmp);
		}

		for(int i = 0; i < (1 << p); i++){
			int sum = 0;
			for(int j = 0; j < p; j++){
				if(i & (1 << j))
					sum += v[j]; 
			}
			if(sum == n){
				ans = true;
				break;
			}
		}
		if(ans){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}

	return 0;
}
