#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int t;
    int x = 0;
    cin>>t;

    while(t--)
    {
        cin>>s;
        if(s == "X++" || s=="++X")
        {
            x++;
        }
        else if( s == "X--" || s=="--X")
        {
            x--;
        }
    }
    cout<<x<<"\n";

    return 0;
}
