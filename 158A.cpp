#include<bits/stdc++.h>
#define size 100
using namespace std;
int main()
{
    int n,k;
    int a[size];

    cin>>n>>k;

    int advance = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        {
            advance++;
        }
    }
    cout<<advance<<"\n";
    return 0;
}
