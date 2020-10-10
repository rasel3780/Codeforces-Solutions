#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;
int main(){
    //FILE;
    int n, a[1010];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
 
    //finding total uniq number and max repeated number; 
    int temp=1, sam=1, uni=1;
    for(int i=1; i<n; i++){
        if(a[i]!=a[i-1]) {
            uni++;
            sam=1;
        }
        if(a[i]==a[i-1]) {
            sam++;
            if(sam>temp) temp = sam;
        }
    }
    printf("%d %d\n", temp, uni);
    return 0;
}
