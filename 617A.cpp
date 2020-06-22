#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, mov;
    cin>>x;
    if(x<=5)
    {
        cout<<"1\n";
    }
    else if(x%5==0)
    {
        mov = (x/5);
        cout<<mov<<"\n";
    }
    else
    {
        mov = (x/5)+1;
        cout<<mov<<"\n";
    }
    return 0;
}
