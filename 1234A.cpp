#include <bits/stdc++.h>
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define SPEED ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void sol(){
    long long int a[150];
    int n;
    cin>>n;
    double sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<(int)ceil(sum/n)<<"\n";
}

int main(){
    SPEED;
    //READ;
    //WRITE;

    int t=1;
    cin>>t;
    while(t--){
        sol();
    }
}
