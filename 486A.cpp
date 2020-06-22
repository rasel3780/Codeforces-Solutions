#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, f;
    cin>>n;
    if(n%2==0)
    {
        f=n/2;
        cout<<f<<"\n";
    }
    else
    {
        f=-(n+1)/2;
        cout<<f<<"\n";
    }
    return 0;
}
