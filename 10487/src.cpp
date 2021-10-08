#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, test_case = 0;
	while(true){
	    scanf("%d", &n);

		if(n == 0){
			break;
		} else{
			test_case++;
			vector<int> numbers;
			int tmp, m;
			for(int i = 0; i < n; i++){
				scanf("%d", &tmp);
				numbers.push_back(tmp);
			}

			/*for(int i = 0; i < n; i++)
				printf("%d ", numbers[i]);
			printf("\n");*/


		  
			vector<int>sum;
			
			for(int i = 0; i < n; i++){
				for(int j = i+1; j < n; j++){
					sum.push_back(numbers[i] + numbers[j]);
				}
			}
			/*
			for(int i = 0; i < sum.size(); i++)
				printf("%d ", sum[i]);
			printf("\n");*/

			scanf("%d", &m);
			int q;
			printf("Case %d:\n", test_case);
			for(int i = 0; i < m; i++){
				scanf("%d", &q);
				int ans = sum[0];
				for(int i = 1; i < sum.size(); i++){
					if(abs(sum[i] - q) < abs(ans - q)){
						ans = sum[i];
					}
				}
				printf("Closest sum to %d is %d.\n", q, ans);
			}

		}
	}
	return 0;
}

