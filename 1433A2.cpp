#include<bits/stdc++.h>
#define FILE freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
int main(){
    //FILE;
    int t;
    string x;
    cin>>t;
    while(t--){
        cin>>x;
        int ans = (x[0] - '0')*10;
        ans = ans-10;
        for(int i=1; i<=x.length(); i++){
            ans+= i; 
        } 
        cout<<ans<<"\n";
    }
}