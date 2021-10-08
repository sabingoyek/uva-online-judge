#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T--){
		int D, Q, L, H;
		string M;

		vector<pair<string, pair<int, int>>> db;
	    
		scanf("%d", &D);

		while(D--){
			cin >> M >> L >> H;
			db.push_back(make_pair(M, make_pair(L,H)));
		}

	
		/*for(int i = 0; i < db.size(); i++){
		  cout << db[i].first << " " << db[i].second.first << " " << db[i].second.second << "\n";
		}*/

		scanf("%d", &Q);
		
		int q;

		while(Q--){
			int ans, ans_count = 0;
			scanf("%d", &q);
			for(int i = 0; i < db.size(); i++){
				if((q >= db[i].second.first) && (q <= db[i].second.second)){
					ans_count++;
					ans = i;
					if(ans_count > 1)
						break;
				}
			}
			if(ans_count == 1){
				printf("%s\n", db[ans].first.c_str());
			} else{
				printf("UNDETERMINED\n");
			}

		}
		if(T != 0)
			printf("\n");
	}
	return 0;
}

