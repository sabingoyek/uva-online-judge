#include <bits/stdc++.h>
using namespace std;
double sum(vector<double> v){
	double sum= 0;
	for(int i = 0; i < v.size(); i++){
		sum += v[i];
	}
	return sum;
}

int main() {
	// your code goes here
	int set = 0, S, C;
	double tmp;

	while(scanf("%d %d", &C, &S) != EOF){
		set++;
	    vector<double> v;
		for(int i = 0; i < S; i++){
			scanf("%lf", &tmp);
			v.push_back(tmp);
		}
		if(S < 2*C){
			for(int i = S; i < 2*C; i++){
				v.push_back(0);
			}
		}
		sort(v.begin(), v.end());

		printf("Set #%d\n", set);

		double imbalance = 0, AM = sum(v) / C;

		for(int i = 0; i < C; i++){
 			if(v[i] == 0)
				printf(" %d: %0.lf\n", i, v[2*C-i-1]);
			else
				printf(" %d: %0.lf %0.lf\n", i, v[i], v[2*C-i-1]);
			imbalance += fabs(v[i]+v[2*C-i-1] - AM);
		}

		printf("IMBALANCE = %.5lf\n", imbalance);
		printf("\n");
	}
	return 0;
}

