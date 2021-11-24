#include<bits/stdc++.h>
#define FILE freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    //FILE;
    SPEED;
    int arr[100050];
    int n;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxx=0, cnt=0;
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            cnt++;
            if(cnt>maxx){
                maxx=cnt;
            }
        }
        else{
            cnt=0;
        }
    }
    cout<<maxx+1<<"\n";
    return 0;
}