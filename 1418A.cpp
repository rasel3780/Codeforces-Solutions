#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y, k;
    int t;
    scanf("%d", &t);
    while(t--){
        scanf("%lld %lld %lld", &x, &y, &k);
        double total_sticks_for_coal = (y*k)+k;
        long long int ans = ceil((total_sticks_for_coal-1)/(x-1));
        printf("%lld\n", ans+k);
    }
    return 0;
}
