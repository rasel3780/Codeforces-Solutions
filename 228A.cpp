#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s[10];

    for(int i=0; i<4; i++){
        scanf("%lld", &s[i]);
    }
    sort(s, s+4);

    int cnt = 0;
    for(int i=0; i<3; i++){
        if(s[i]!=s[i+1]) cnt++;
    }
    printf("%d\n", 3-cnt);

    return 0;
}
