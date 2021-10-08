#include <bits/stdc++.h>
using namespace std;
vector<int> v;

bool check_distance(int a, int b, int c){
	int d = abs(find(v.begin(), v.end(), a) - find(v.begin(), v.end(), b));
	//	cout << "d: " << d << "\n";
	if(c<0){
		if(d >= abs(c))
		 return true;
		else
			return false;
	} else{
		if(d <= abs(c))
			return true;
		else
			return false;
	}
}
int main() {
	// your code goes here
	int n, m;
	//cout<< check_distance(1,5, -7);
	
	while(true){
		
		int ans = 0;
		scanf("%d %d", &n, &m);

		if((n == 0) && (m == 0)){
			break;
		} else{
			for(int i = 0; i < n; i++){
				v.push_back(i);
			}

			int a, b, c;
			vector<pair<int , pair<int , int>>> cons;
			for(int i = 0; i < m; i++){
				scanf("%d %d %d", &a, &b, &c);
				cons.push_back(make_pair(a, make_pair(b,c)));
			}

			do{
				/*for(int i = 0; i < n; i++)
					cout << v[i] << " ";
				cout << "\n";*/
				int i;
				for( i = 0; i < m; i++){
					bool tmp = true;
					a = cons[i].first; b = cons[i].second.first;
					c = cons[i].second.second;
					
					//cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << "\n";
					
					if(!check_distance(a, b, c)){
						tmp = false;
						break;						
					}
				}
				if(i == m)
					ans++;
				
			}while(next_permutation(v.begin(), v.end()));
		}
		printf("%d\n", ans);
		v.clear();
	}
	return 0;
}

