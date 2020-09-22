#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n, t;
	scanf("%d", &n);
	int a[1010];
	int mx = 0, mn = 0;
	for (int i = 0; i < n; ++i){
		scanf("%d", &a[i]);
		mx = max(mx,a[i]), mn = min(mn,a[i]);
	}
	
	int tcost = INT_MAX;
	for (int i = 1; i <= mx; ++i){
		int cost=0;
		for(int j=0; j<n; j++){
			if(a[j] < i){
				cost += abs(a[j] - (i-1));
			}
			else if(a[j] > i){
				cost += abs(a[j] - (i+1));
			}
		}
		if(cost < tcost){
			tcost = cost;
			t = i;
		}
	}
	printf("%d %d\n", t, tcost);
	return 0;
}