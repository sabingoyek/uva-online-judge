#include <bits/stdc++.h>
using namespace std;

long compute_an(vector<int> v, int n){
	long ans = 0;
	for(int i = 0; i < v.size(); i++){
		ans += (long)v[i]*pow(n, i);
	}
	return ans;
}

int main() {
	// your code goes here
	int T,k, d;
	scanf("%d", &T);
	while(T--){
		vector<int> v;
		int tmp, degree, ans, d, k, n, rank = 0;

		scanf("%d", &degree);

		for(int i = 0; i <= degree; i++){
			scanf("%d", &tmp);
			v.push_back(tmp);
		}
		scanf("%d", &d);
		scanf("%d", &k);

		for(int i = 1; i > 0; i++){
			for(int j = 1; j <= i*d; j++ ){
				rank++;
				if(rank == k){
					ans = i;
					break;
				}
			}
			if(rank == k)
				break;
		}



		printf("%ld\n", compute_an(v, ans));
	}
	return 0;
}

