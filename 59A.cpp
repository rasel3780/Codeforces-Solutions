#include<bits/stdc++.h>
using namespace std;
int main()
{
    int upper=0;
    int lower=0;
    string str;
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if(upper>lower)
    {
        transform(str.begin(), str.end(), str.begin(),::toupper);
        cout<<str<<"\n";
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(),::tolower);
        cout<<str<<"\n";
    }
    return 0;
}
