#include <bits/stdc++.h>
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt", "w", stdout)
#define SPEED ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void sol(){
    int n;
    cin>>n;
    if(n==0)
        cout<<"1\n";
    else if(n%4==0)
        cout<<"6\n";
    else if(n%4==1)
        cout<<"8\n";
    else if(n%4==2)
        cout<<"4\n";
    else if(n%4==3)
        cout<<"2\n";
}

int main(){
    SPEED;
    //READ;
    //WRITE;

    int t=1;
    //cin>>t;
    while(t--){
        sol();
    }

}

