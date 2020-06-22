#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q;
    int room=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>q;
        if((q-p)>=2)
        {
            room++;
        }
    }
    cout<<room;
    return 0;
}
