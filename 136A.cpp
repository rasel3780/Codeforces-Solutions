#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int>m;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;
        m[a]=i;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<m[i]<<" ";
    }
    cout<<"\n";

}

