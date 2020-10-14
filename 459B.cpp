#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;

int main(){
    //FILE;
    long long int n;
    long long int a[200010];
    long long int ans2;
   
    scanf("%lld", &n);
    for(int i=0; i<n; i++)
        scanf("%lld", &a[i]);

    sort(a, a+n);
    long long int ans1= a[n-1]-a[0];
    
    if(a[0]==a[n-1])
        ans2 = n*(n-1)/2;
    
    else{
        long long int minCnt=0, maxCnt=0;
        for(int i=0; i<n; i++){
            if(a[i]==a[0])   minCnt++;
            if(a[i]==a[n-1]) maxCnt++;
        }
        ans2 = minCnt*maxCnt;   
    }
    printf("%lld %lld\n", ans1, ans2);

    return 0;
}