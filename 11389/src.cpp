#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, d, r;
	scanf("%d %d %d", &n, &d, &r);
	while(true){
		if((n == 0) && (d == 0) && (r == 0)){
			break;
		} else{
			vector<int> m;
			vector<int> a;
			int tmp;
			for(int i = 0; i < n; i++){
				scanf("%d", &tmp);
				m.push_back(tmp);
			}
			for(int i = 0; i < n; i++){
				scanf("%d", &tmp);
				a.push_back(tmp);
			}

			
			sort(m.begin(), m.end());
			sort(a.rbegin(), a.rend());

			int ans = 0;
			for(int i = 0; i < n; i++){
				if(m[i]+a[i] > d){
					ans += (m[i]+a[i] - d)*r;
				}
			}
			printf("%d\n", ans);
		}
	scanf("%d %d %d", &n, &d, &r);
  }
	return 0;
}

