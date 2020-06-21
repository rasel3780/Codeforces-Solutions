#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, w, n, i;
    unsigned long long total = 0;

    cin>>k>>w>>n;
    for(i=1; i<=n; i++)
    {
        total = (i*k)+total;
    }
    if(total<=w)
    {
        cout<<"0\n";
    }
    else
    {
        cout<<total-w<<"\n";
    }
    return 0;
}
