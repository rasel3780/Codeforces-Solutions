#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin); freopen("output.txt", "w",stdout);

using namespace std;

int ceilFinder(int a, int b){
	return (a+b-1)/b;	
}

int main(){
	//FILE
	int n, x, t;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &x);
		if(n<2) printf("1\n");
		else{
			int ans = ceilFinder(n-2, x);
			printf("%d\n", ans+1);
		}
	}	
	return 0;
}	