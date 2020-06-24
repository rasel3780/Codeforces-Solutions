#include<bits/stdc++.h>
using namespace std;
int main()
{
    string number1;
    string number2;
    cin>>number1>>number2;

    int len = number1.length();
    for(int i=0; i<len; i++)
    {
        if(number1[i] == number2[i])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }
    cout<<"\n";
    return 0;
}
