#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int m=0,n=0;
    int i;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='1')
        {
            m++;
            n=0;
            if(m>6)
            {
                cout<<"YES\n";
                break;
            }
        }
        else if(str[i]=='0')
        {
            m=0;
            n++;
            if(n>6)
            {
                cout<<"YES\n";
                break;
            }
        }
    }
    if(n<7 && m<7)
    {
        cout<<"NO\n";
    }
    return 0;
}
