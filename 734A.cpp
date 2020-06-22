#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int anton = 0;
    int danik = 0;

    cin>>n;
    char name[n];

    for(int i=0; i<n; i++)
    {
        cin>>name[i];
        if(name[i]=='A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
    if(anton==danik)
    {
        cout<<"Friendship\n";
    }
    else if(anton>danik)
    {
        cout<<"Anton\n";
    }
    else
    {
        cout<<"Danik\n";
    }
    return 0;
}
