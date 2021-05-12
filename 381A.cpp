#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    int sereja=0, dima=0;
    vector<int> v;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
   
    int i=0;
    while(!v.empty()){
        int tp=0;
        if(v[0]>v[v.size()-1]){
            tp=v[0];
            v.erase(v.begin());
        }
        else{
            tp = v[v.size()-1];
            v.pop_back();
        }
        if(i%2==0){
            sereja+=tp;
        }
        else{
            dima+=tp;
        }
        i++;
    }
    cout<<sereja<<" "<<dima<<"\n";

    return 0;
}