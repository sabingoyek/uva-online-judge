#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N,n;
	scanf("%d", &N);
	while(N--){
		int A, B, C, i, j, k;
		bool sol = false;
	    scanf("%d %d %d", &A, &B, &C);
		for(i = -100; i <= 100; i++){
			for(j = -100; j <= 100; j++){
				for( k = -100; k <= 100; k++){
					if(i != j && i != k && j != k &&
							(i+j+k == A) &&
							(i*j*k == B) &&
							(i*i + j*j + k*k == C)){
						sol = true;
						break;
					}
				}
				if(sol)
					break;
			}
			if(sol)
				break;
		}
		if(sol){
			printf("%d %d %d\n", i, j, k);
		} else{
			printf("No solution.\n");
		}
	}
	return 0;
}

