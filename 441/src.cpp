#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int k, tour = 1;
	
	while(true){
		scanf("%d", &k);
		if(k == 0){
			break;
		} else{
			vector<int> v;
			int tmp;
			for(int i = 0; i < k; i++){
				scanf("%d", &tmp);
				v.push_back(tmp);
			}
			if(tour != 1)
			  printf("\n");

			for(int i1 = 0; i1 < k-5; i1++){
				for(int i2 = i1+1; i2 < k-4; i2++){
					for(int i3 = i2+1; i3 < k-3; i3++){
						for(int i4 = i3+1; i4 < k-2; i4++){
							for(int i5 = i4+1; i5 < k-1; i5++){
								for(int i6 = i5+1; i6 < k; i6++){
									printf("%d %d %d %d %d %d\n", v[i1], v[i2], v[i3], v[i4], v[i5], v[i6]);
								}

							}

						}

					}

				}

			}
			tour++;
	}
  }
	return 0;
}

