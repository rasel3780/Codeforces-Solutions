#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, evenLoc, oddLoc, number[110];
    int even=0, odd=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>number[i];
        if(number[i]%2==0){
            even++;
            evenLoc = i;
        }
        else{
            odd++;
            oddLoc = i;
        }
    }
    if(even==1)
        cout<<evenLoc+1;
    else
        cout<<oddLoc+1;
    return 0;
}
