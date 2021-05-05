#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
#define SPEED ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pi 2.0*acos(0.0)
#define NL '\n'
#define MOD 1000000007
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void sol(){
    ll n, m, c, r;
    cin>>n>>m>>r>>c;

    ll fnt = abs(1-c);
    ll bck = abs(m-c);
    ll fontBackMax = max(fnt, bck);

    ll top = abs(1-r);
    ll down = abs(n-r);
    ll topDownMax = max(top, down);

    ll ans = fontBackMax+topDownMax;
    cout<<ans<<NL;
}
int main(){
    //FILE;
    SPEED;
    int t=1;
    cin>>t;
    while(t--){
        sol();
    }
}
