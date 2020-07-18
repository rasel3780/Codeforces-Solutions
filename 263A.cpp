#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    int i, j, m, n, dis;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                m = i;
                n = j;
            }
        }
    }
    dis = abs(m-2) + abs(n-2);
    cout<<dis<<endl;

}
