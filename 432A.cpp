#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, team=0;
    cin>>n>>k;
    int member[n];

    for(i=0; i<n; i++)
    {
        cin>>member[i];
        if(member[i]+k<6)
        {
            team++;
        }
    }
    team = team/3;
    cout<<team<<"\n";
    return 0;
}