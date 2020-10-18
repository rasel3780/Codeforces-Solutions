#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
using namespace std;

int main(){
    //FILE;
    int t;
    scanf("%d", &t);
    while(t--){
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        long long int x = a&b;
        long long int ans = (a^x) + (b^x);
        printf("%lld\n", ans);
    }
    return 0;
}
