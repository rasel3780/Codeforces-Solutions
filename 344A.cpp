#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str[n];
    int group=0;
    for(int i=0; i<n; i++)
    {
        cin>>str[i];
    }
    for(int i=0; i<n; i++)
    {
        if(str[i]!=str[i+1])
        {
            group++;
        }

    }
    cout<<group<<"\n";
    return 0;
}
