#include<bits/stdc++.h>
#define FILE freopen("in.txt", "r", stdin); freopen ("out.txt", "w", stdout);


using namespace std;
int main(){
	FILE
	int n, t;
	string s;
	
	scanf("%d", &t);
	while(t--){
		bool check = false;
		scanf("%d", &n);
		cin>>s;

		if(n%2){ 
			for(int i=0; i<n; i=i+2){
				if((s[i]-48)%2){
					check = true;
					break;
				}
			}
			if(check)printf("1\n");
			else printf("2\n");
		}
		else{ 
			for(int i=1; i<n; i=i+2){
				if((s[i]-48)%2==0){
					check = true;
					break;
				}
			}
			if(check)printf("2\n");
			else printf("1\n");
		}
	}
	return 0;
}