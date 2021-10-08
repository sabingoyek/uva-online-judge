#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,n, tmp;
	scanf("%d", &T);
	while(T--){
	    vector<int> v;
		int ans = 0;
		scanf("%d", &n);

		for(int i = 0; i < n; i++){
			scanf("%d", &tmp);
			v.push_back(tmp);
		}

		for(int i = 1; i < n; i++){
			int count = 0;
			for(int j = 0; j < i; j++){
				if(v[j] <= v[i]){
					count++;
				}
			}
			ans += count;
		}
		printf("%d\n", ans);

	}
	return 0;
}

