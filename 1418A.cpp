#include<bits/stdc++.h>
using namespace std;

long long int ceil_finder(long long int a, long long int b) {
    return (a+b-1)/b;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        long long int x, y, k;
        scanf("%lld %lld %lld", &x, &y, &k);
        long long int ans = ceil_finder(k*y+k-1, x-1);
        printf("%lld\n", ans+k);
    }
    return 0;
}
