#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sign = 0;
    int i;
    string s;
    cin>>s;

    sort(s.begin(), s.end());
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='+')
        {
            sign++;
        }
    }
    for(i=sign; i<s.length(); i++)
    {
        cout<<s[i];
        if(i<(s.length()-1))
        {
            cout<<"+";
        }
    }
    cout<<"\n";
    return 0;
}
