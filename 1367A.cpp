#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a.length()<=2)
        {
            cout<<a<<"\n";
        }
        else
        {
            cout<<a[0];
            for(i=1; i<=a.length(); i++)
            {
                if(i%2!=0)
                {
                    cout<<a[i];
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}
