#include<bits/stdc++.h>

using namespace std;
int main()
{
    string str;
    int dis=0;
    int i;

    cin>>str;
    sort(str.begin(), str.end());

    for(i=0; i<str.length(); i++)
    {
        if(str[i]!=str[i+1])
        {
            dis++;
        }
    }
    if(dis%2==0)
    {
        cout<<"CHAT WITH HER!\n";
    }
    else
    {
        cout<<"IGNORE HIM!\n";
    }
    return 0;
}
