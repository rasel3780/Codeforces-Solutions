#include<bits/stdc++.h>
#define FILE freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    //FILE;
    SPEED;
    int n;
    cin>>n;
    if(n%2==0){
        for(int i=1; i<=n; i++){
            if(i%2!=0){
                cout<<i+1<<" ";
            }
            else{
                cout<<i-1<<" ";
            }
        }
    }
    else{
        cout<<"-1";
    }
    cout<<"\n";
    return 0;
}