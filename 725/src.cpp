#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	bool first = true;
	while(scanf("%d", &N)){
		if(N == 0)
			break;
		bool ans = false;
		if(! first){
			printf("\n");
		}
		for(int fghij = 1234; fghij <= 98765 / N; fghij++){
			int abcde = fghij * N;
			int tmp, used = (fghij < 10000); // if digit f=0, then we have to flag it
			//cout << used << "\n";
			tmp = abcde;
			while(tmp){
				used |= 1 << (tmp % 10);
				tmp /= 10;
			}
			tmp = fghij;
			while(tmp){
				used |= 1 << (tmp % 10);
				tmp /= 10;
			}
			if(used == (1<<10) - 1){
				printf("%0.5d / %0.5d = %d\n", abcde, fghij, N);
				ans = true;
			}
		}
		
		if(!ans)
			printf("There are no solutions for %d.\n", N);
		first = false;
	}
	return 0;
}

