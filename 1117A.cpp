#include<bits/stdc++.h>
#define FILE freopen("in.txt", "r", stdin); freopen("out.txt", "w", stdout);
using namespace std;

int main(){
	///FILE
	int a[100010];
	int n;
	scanf("%d", &n);
	int maxx=0;
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		maxx = max(maxx, a[i]);
	}
	int check=0, len=0;
	for(int i=0; i<n; i++){
		if(a[i]==maxx){
			check++;
			len = max(len, check);
		}
		else{
			check=0;
		}
	}
	printf("%d\n", len);
	return 0;
}
