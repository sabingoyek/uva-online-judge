#include <bits/stdc++.h>
using namespace std;

int N, h;
bool used1, used2;

int main() {
	// your code goes here
	int d;

	while(scanf("%d", &d) != EOF){
		h = pow(10, d/2);
		for(int i = 0; i < h; i++){
		used1 = (i < h);
		for(int j = 0; j < h; j++){
			N = i * h + j;

			/*if(N > 32767)
				break;
			*/
			used2 = (j < h);
			if( (i+j) * (i+j) == N){
				if(used1){
					if(used2){
						if(d == 2)
					  		printf("%01d%01d\n", i, j);
						else if(d == 4)
							printf("%02d%02d\n", i, j);
						else if(d == 6)
							printf("%03d%03d\n", i, j);
						else if(d == 8)
							printf("%04d%04d\n", i, j);
					} else{
						if(d == 2)
					  		printf("%01d%d\n", i, j);
						else if(d == 4)
							printf("%02d%d\n", i, j);
						else if(d == 6)
							printf("%03d%d\n", i, j);
						else if(d == 8)
							printf("%04d%d\n", i, j);
					}
				} else{
					if(used2){
						if(d == 2)
					  		printf("%d%01d\n", i, j);
						else if(d == 4)
							printf("%d%02d\n", i, j);
						else if(d == 6)
							printf("%d%03d\n", i, j);
						else if(d == 8)
							printf("%d%04d\n", i, j);
					} else{
							printf("%d%d\n", i, j);
					}
				}
			}
		}
	}
	}
	return 0;
}

