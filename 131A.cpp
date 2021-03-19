#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    int cnt=0, c=0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            cnt++;
        if(str[0]>='a' && str[0]<='z' && i==0)
            c++;
        if(str[i]>='A' && str[i]<='Z' && i>0){
            c++;
        }
        // cout<<c<<endl;
    }

    if(cnt==str.length()){

        for(int i=0; i<str.length(); i++)
        {
            cout<<(char)tolower(str[i]);
        }
        cout<<"\n";
    }
    else if(c==str.size()){
        for(int i=0; i<str.length(); i++)
        {
            if(i==0)
                cout<<(char)toupper(str[i]);
            else
                cout<<(char)tolower(str[i]);
        }
        cout<<"\n";
    }

    else
        cout<<str<<"\n";

}
