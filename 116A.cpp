#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,enter,exit;
    int maxi=0;
    int passenger=0;
    int inside;
    cin>>n;
    while(n--)
    {
        cin>>exit>>enter;

        inside=(passenger-exit)+enter;
        passenger = inside;
        if(inside>=maxi)
        {
            maxi = inside;
        }
    }
    cout<<maxi<<"\n";
    return 0;
}
