#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a;
    int width=0;
    cin>>n>>h;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a>h)
        {
            width = width+2;
        }
        else
        {
            width++;
        }
    }
    cout<<width<<"\n";
    return 0;
}
