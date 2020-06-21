#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, petya, vasya, tonya;
    int solution=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>petya>>vasya>>tonya;
        if(petya==1 && vasya ==1)
        {
            solution++;
        }
        else if(petya==1 && tonya==1)
        {
            solution++;
        }
        else if(vasya ==1 && tonya==1)
        {
            solution++;
        }
        else if(petya==1 && vasya==1 && tonya==1)
        {
            solution++;
        }
    }
    cout<<solution<<"\n";
    return 0;
}
