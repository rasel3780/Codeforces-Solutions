#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='A' || str[i]=='a' || str[i]=='E'
                ||str[i]=='e' || str[i]=='I' ||str[i]=='i'
                ||str[i]=='O' || str[i]=='o' ||str[i]=='U'
                ||str[i]=='u' || str[i]=='y' ||str[i]=='Y')
        {
            continue;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i]+32;
            cout<<"."<<str[i];
        }
        else
        {
            cout<<"."<<str[i];
        }
    }
    cout<<"\n";
    return 0;
}
