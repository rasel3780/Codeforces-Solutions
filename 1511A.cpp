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
    int n;
    cin>>n;
    int sum=0, tp;
    for(int i=0; i<n; i++){
        cin>>tp;
        if(tp==1 || tp==3){
            sum+=1;
        }
    }
    cout<<sum<<NL;
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

