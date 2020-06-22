#include<bits/stdc++.h>
using namespace std;
int main()
{
    int stones, i, j;
    cin>>stones;

    char color[stones];
    for(i=0; i<stones; i++)
    {
        cin>>color[i];
    }

    int remov=0;
    for(j=0; j<stones; j++)
    {
        if(color[j]==color[j+1])
        {
            remov++;
        }
    }
    cout<<remov<<"\n";
    return 0;
}
